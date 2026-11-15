//problem : Find Sum of all even numbers in Given Range

function RangeSumEven(iNo1, iNo2)  
{
	//filter
	if (iNo1 > iNo2) 
	{
		return -1
	}

	if (iNo1 < 0 || iNo2 < 0) 
	{
		return -1
	}

	let iCnt = 0
	let iSum = 0

	for (iCnt = iNo1; iCnt <= iNo2; iCnt++) {
		if (iCnt%2 == 0) {
			iSum += iCnt
			iCnt++
		}
	}

	return iSum
}

function main() 
{
	var iValue1 = 0
	var iValue2  = 0
	var iRet = 0

	iValue1 = 10
	iValue2 = 19
	iRet = RangeSumEven(iValue1, iValue2)

	if (iRet == -1) {
		console.log("Invalid Range")
		return
	}

	console.log("Sum is : ", iRet)
}

main()
