# SDC1029 - Web Security Topics

## HTTPS in `localhost`


### Requirements:
- Install [mkcert](https://github.com/FiloSottile/mkcert) 
---
If you want to set up another server software here's the respective guides:
- [Apache's settings](https://www.digicert.com/kb/csr-ssl-installation/apache-openssl.htm) 
- [Nginx's settings](https://www.digicert.com/kb/csr-ssl-installation/nginx-openssl.htm)
---

### Steps to reproduce
Once you have `mkcert` installed generate the local CA:

`mkcert -install`

Generate Local SSL Certificates:

`mkcert example.com '*.example.com' localhost 127.0.0.1 ::1`


You can work with the server you want, in this example we're using a tiny server written in go:
```go
package main

import (
    "fmt"
    "net/http"
)

func main() {
    http.HandleFunc("/", HelloServer)
	http.ListenAndServeTLS(":8080", "example.com+5.pem", "example.com+5-key.pem", nil)
}

func HelloServer(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Hola TecMM! 🔐")
}
```

- Run `go run index.go`
- Go to `https://localhost:8080` (make sure to use https instead of http)
- Enjoy!

![example](https://imgur.com/Jw0ZHpg.png)

