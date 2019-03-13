package main

import "fmt"

func MCD(a, b int) int {
	for b != 0 {
		t := b
		b = a % b
		a = t
	}
	return a
}

func main() {
	fmt.Println(MCD(4, 8))
}
