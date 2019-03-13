package main

import (
	"fmt"
	"regexp"
	"strings"
)

func isPalindrome(input string) bool {
	input = sanitize(input)
	for i := 0; i < len(input)/2; i++ {
		if input[i] != input[len(input)-i-1] {
			return false
		}
	}
	return true
}

func sanitize(input string) string {
	reg, _ := regexp.Compile("[^A-Za-z0-9]+")
	safe := reg.ReplaceAllString(input, "")
	return strings.ToLower(strings.Trim(safe, ""))
}

func main() {
	if isPalindrome("aNita Lava la Tina") {
		fmt.Println("La frase que ingresaste es un palindromo")
	} else {
		fmt.Println("La frase que ingresaste no es un palindromo")
	}

}
