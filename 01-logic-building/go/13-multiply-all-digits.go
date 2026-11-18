//problem : Find the Multiplication of all digits in a  given number

package main

import "fmt"

func MultDigits(iNo int) int {

	var iAns int = 0

	iAns = 1

	for iNo > 0 {
		iDigit := iNo % 10

		iAns *= iDigit

		iNo /= 10
	}

	return iAns
}

func main() {

	var iValue int = 0
	var iRet int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	iRet = MultDigits(iValue)

	fmt.Println("Multiplication of Digits is : ", iRet)
}
