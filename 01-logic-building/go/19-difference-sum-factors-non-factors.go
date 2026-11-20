//problem : Find the Difference between summation of all of the factors and non factors of a number

package main

import "fmt"

func FactDiff(iNo int) int {

	var iAns int = 0
	var iSumFact int = 0
	var iSumNonFact int = 0

	for iCnt := 1; iCnt < iNo; iCnt++ {

		if iNo%iCnt != 0 {
			iSumNonFact += iCnt
		} else {
			iSumFact += iCnt
		}
	}

	iAns = iSumFact - iSumNonFact

	return iAns
}

func main() {

	var iValue int = 0
	var iRet int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	iRet = FactDiff(iValue)

	fmt.Println("Differenece of Factors Is : ", iRet)
}
