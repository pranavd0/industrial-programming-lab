//problem : Count the freqency of 4 in the given number

function CountFour(iNo)  
{
	let iAns = 0

	while(iNo > 0) 
	{
		let iDigit = iNo % 10

		if (iDigit == 4) 
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

	iValue = 101564			//testing

	iRet = CountFour(iValue)

	console.log("Frequency of Four's: ", iRet)
}

main()
