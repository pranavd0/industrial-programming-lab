//problem : Count the freq of even digits in a  given number

package main

import "fmt"

func CountEven(iNo int) int {

	var iAns int = 0

	for iNo > 0 {
		iDigit := iNo % 10

		if iDigit%2 == 0 {
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

	iRet = CountEven(iValue)

	fmt.Println("Frequency : ", iRet)
}
