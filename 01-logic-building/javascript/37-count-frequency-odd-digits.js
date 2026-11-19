//problem : Count the freq of odd digits in a  given number

function CountOdd(iNo)  
{
	let iAns = 0

	while(iNo > 0) 
	{
		let iDigit = iNo % 10

		if (iDigit % 2 != 0) 
		{
			iAns++
		}

		iNo = Math.floor(iNo / 10)
	}

	return iAns
}

function main() {

	var iValue = 0
	var iRet = 0

	iValue = 10			//testing

	iRet = CountOdd(iValue)

	console.log("Frequency : ", iRet)
}

main()
