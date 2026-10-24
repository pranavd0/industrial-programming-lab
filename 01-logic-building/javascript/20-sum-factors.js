//problem : return sum of all factors of a number

function Sumfactors(iNo)
{
    let iCnt = 0
    let iSum = 0

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt
        }
    }

    return iSum
}

function main()
{
    let iRet = 0

    iRet = Sumfactors(12)

    console.log("Summation of Factors :", iRet)
}

main()