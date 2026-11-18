//problem : Find Sum of numbers in Given Range

package main

import "fmt"

func RangeSum(iNo1 int, iNo2 int) int {
	//filter
	if iNo1 > iNo2 {
		return -1
	}

	if iNo1 < 0 || iNo2 < 0 {
		return -1
	}

	var iCnt int = 0
	var iSum int = 0

	for iCnt = iNo1; iCnt <= iNo2; iCnt++ {
		iSum += iCnt
	}

	return iSum
}

func main() {
	var iValue1 int = 0
	var iValue2 int = 0
	var iRet int = 0

	fmt.Print("Enter the Starting point :")
	fmt.Scan(&iValue1)

	fmt.Print("Enter the Ending point :")
	fmt.Scan(&iValue2)

	iRet = RangeSum(iValue1, iValue2)

	if iRet == -1 {
		fmt.Println("Invalid Range")
		return
	}

	fmt.Println("Sum is : ", iRet)
}
