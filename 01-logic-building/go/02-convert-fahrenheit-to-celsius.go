//problem : convert farenhite to degree

package main

import "fmt"

func FhToCs(fNo float64) float64 {
	var fAns float64

	fAns = 0.0

	fAns = (fNo - 32) * (5.0 / 9.0)

	return fAns
}

func main() {
	var fValue float64 = 0.0
	var fResult float64 = 0.0

	fmt.Print("Enter the Temperature in farenhite:")
	fmt.Scan(&fValue)

	fResult = FhToCs(fValue)

	fmt.Println("Temperature in Celcius:", fResult)
}
