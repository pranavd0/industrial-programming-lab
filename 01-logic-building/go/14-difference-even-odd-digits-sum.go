//problem : Find the Difference between summation of even digits and odd digits

package main

import "fmt"

func CountDiff(iNo int) int {

	var iDiff int = 0
	var iEvenSum int = 0
	var iOddSum int = 0

	for iNo > 0 {
		iDigit := iNo % 10

		if iDigit%2 == 0 {
			iEvenSum += iDigit
		} else {
			iOddSum += iDigit
		}

		iNo /= 10
	}

	iDiff = iEvenSum - iOddSum

	return iDiff
}

func main() {

	var iValue int = 0
	var iRet int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	iRet = CountDiff(iValue)

	fmt.Println("Differenece : ", iRet)
}
