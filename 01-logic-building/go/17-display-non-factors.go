//problem : Display all non factors

package main

import "fmt"

func DisplayFact(iNo int) {

	for iCnt := 1; iCnt <= iNo; iCnt++ {

		if iNo%iCnt != 0 {
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
