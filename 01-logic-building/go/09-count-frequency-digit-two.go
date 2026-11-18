//problem : Count the freqency of 2 in the given number

package main

import "fmt"

func CountTwo(iNo int) int {

	var iAns int = 0

	for iNo > 0 {
		iDigit := iNo % 10

		if iDigit == 2 {
			iAns++
		}

		iNo /= 10
	}

	return iAns
}

func main() {

	var iValue int = 0
	var iRet int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	iRet = CountTwo(iValue)

	fmt.Println("Frequency of Two's: ", iRet)
}
