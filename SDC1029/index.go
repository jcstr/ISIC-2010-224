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

