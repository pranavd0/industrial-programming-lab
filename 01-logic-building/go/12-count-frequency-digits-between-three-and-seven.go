//problem : Count the freqency of digits in a  given number which are in between 3 to 7

package main

import "fmt"

func CountInRange(iNo int) int {

	var iAns int = 0

	for iNo > 0 {
		iDigit := iNo % 10

		if iDigit > 3 && iDigit < 7 {
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

	iRet = CountInRange(iValue)

	fmt.Println("Frequency : ", iRet)
}
