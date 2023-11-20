package main

import (
	"fmt"
	"math"
)

func main() {
	fmt.Println(circleArea(20))
	fmt.Println(circleArea(10))
	fmt.Println(circleArea(5))
}

func circleArea(radius float64) float64 {
	var a float64 = math.Pi * (radius * radius)
	return a
}
