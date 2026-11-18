//problem : Print the numbers in Given Range

package main

import "fmt"

func RangeDisplay(iNo1 int, iNo2 int) {
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

	for iCnt = iNo1; iCnt <= iNo2; iCnt++ {
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

	RangeDisplay(iValue1, iValue2)
}
