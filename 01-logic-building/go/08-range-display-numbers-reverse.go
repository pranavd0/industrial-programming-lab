//problem : Print the numbers in Given Range in Reverse order

package main

import "fmt"

func RangeDisplayRev(iNo1 int, iNo2 int) {
	//filter
	if iNo1 > iNo2 {
		fmt.Println("Invalid Range")
		return
	}
	if iNo1 < 0 || iNo2 < 0 {
		fmt.Println("Invalid Range")
		return
	}

	var iCnt int = 0

	for iCnt = iNo2; iCnt >= iNo1; iCnt-- {
		fmt.Print(iCnt, " ")
	}

	fmt.Println()
}

func main() {
	var iValue1 int = 0
	var iValue2 int = 0

	fmt.Print("Enter the Starting point :")
	fmt.Scan(&iValue1)

	fmt.Print("Enter the Ending point :")
	fmt.Scan(&iValue2)

	RangeDisplayRev(iValue1, iValue2)
}
