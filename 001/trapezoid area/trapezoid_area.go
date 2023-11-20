package main

import (
	"fmt"
)

func trapezoid_area(base1, base2, height float64) float64 {
	return ((base1 + base2) / 2) * height
}

func main() {
	fmt.Println(trapezoid_area(10, 20, 5))
	fmt.Println(trapezoid_area(20, 40, 10))
	fmt.Println(trapezoid_area(5, 10, 5))
}
