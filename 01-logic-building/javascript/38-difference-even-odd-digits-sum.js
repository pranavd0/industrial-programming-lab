//problem : Find the Difference between summation of even digits and odd digits

function CountDiff(iNo)  
{
	let iDiff = 0
	let iEvenSum = 0
	let iOddSum = 0

	while(iNo > 0) 
	{
		let iDigit = iNo % 10

		if (iDigit % 2 == 0) 
		{
			iEvenSum += iDigit
		}
		else
		{
			iOddSum += iDigit
		}

		iNo = Math.floor(iNo / 10)
	}

	iDiff = iEvenSum - iOddSum

	return iDiff
}

function main() {

	var iValue = 0
	var iRet = 0

	iValue = 2395		//testing

	iRet = CountDiff(iValue)

	console.log("Difference : ", iRet)
}

main()
