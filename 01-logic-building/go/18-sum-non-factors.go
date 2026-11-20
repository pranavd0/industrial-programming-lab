//problem : Find the Summation of all of the non factors of a number

package main

import "fmt"

func SumNonFact(iNo int) int {

	var iAns int = 0

	for iCnt := 1; iCnt <= iNo; iCnt++ {

		if iNo%iCnt != 0 {
			iAns += iCnt
		}
	}

	return iAns
}

func main() {

	var iValue int = 0
	var iRet int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	iRet = SumNonFact(iValue)

	fmt.Println("Summation Of Non Factors Is : ", iRet)
}
