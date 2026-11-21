//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: 2   4   6   8
//              1   3   5   7
//              2   4   6   8
//              1   3   5   7

package main

import "fmt"

func pattern(iRow int, iCol int) {

	var i int = 0
	var j int = 0
	var iCount int = 0

	iCount = 1

	for i = 1; i <= iRow; i++ {

		if i%2 == 0 {
			iCount = 1
		} else {
			iCount = 2
		}

		for j = 1; j <= iCol; j++ {

			fmt.Print(iCount, "\t")
			iCount += 2
		}

		fmt.Print("\n\n")
	}
}

func main() {

	var iValue1 int = 0
	var iValue2 int = 0

	fmt.Println("Enter the Number of Rows")
	fmt.Scan(&iValue1)

	fmt.Println("Enter the Number of Columns")
	fmt.Scan(&iValue2)

	pattern(iValue1, iValue2)

}
