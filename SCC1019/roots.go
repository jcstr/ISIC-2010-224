package main

import (
	"fmt"
	"math"
)

func roots(x float64, n float64) float64 {
	z := x / n
	for i := 0; i < 20; i++ {
		if math.Pow(z, n) == x {
			return z
		}
		z -= (math.Pow(z, n) - x) / (n * math.Pow(z, n-1))
	}
	return z
}

func main() {
	fmt.Println(roots(27, 3))
}
