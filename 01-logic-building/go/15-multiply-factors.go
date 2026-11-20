//problem : Find the Multiplication of factors of given number

package main

import "fmt"

func MultFact(iNo int) int {

	var iAns int = 0

	iAns = 1
	for iCnt := 1; iCnt <= iNo/2; iCnt++ {

		if iNo%iCnt == 0 {
			iAns *= iCnt
		}
	}

	return iAns
}

func main() {

	var iValue int = 0
	var iRet int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	iRet = MultFact(iValue)

	fmt.Println("Multipliaction of Factors is : ", iRet)
}
