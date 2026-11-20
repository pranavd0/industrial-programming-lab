//problem : Display all Factors of a gIven number in REverse order

package main

import "fmt"

func DisplayFact(iNo int) {

	for iCnt := iNo / 2; iCnt >= 1; iCnt-- {

		if iNo%iCnt == 0 {
			fmt.Print(iCnt, " ")
		}
	}

	fmt.Println()
}

func main() {

	var iValue int = 0

	fmt.Print("Enter the Number :")
	fmt.Scan(&iValue)

	DisplayFact(iValue)
}
