//problem : find factorial

function fact(iNo)
{
    let cAns = 1;
    let iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cAns *= iCnt;
    }
    
    return cAns;
}

function main()
{
    let iValue = 0;
    let iResult = 0;

    iValue = 6;

    iResult = fact(iValue);

    console.log("Factorial of ",iValue, "is", iResult);
}

main();