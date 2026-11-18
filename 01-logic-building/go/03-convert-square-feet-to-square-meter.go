//problem : convert Area in square feet to square meter

package main

import "fmt"

func SquareMeter(fNo float32) float32 {
	var fAns float32 = 0.0

	fAns = fNo * 0.0929

	return fAns
}

func main() {
	var fValue float32 = 0.0
	var fRet float32 = 0.0

	fmt.Print("Enter the Area in Square Feet: ")
	fmt.Scan(&fValue)

	fRet = SquareMeter(fValue)

	fmt.Println("Area in SquareMeter is: ", fRet)
}
