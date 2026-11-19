//problem: Find the multiplication of given 3 numbers

function mult(iNo1, iNo2, iNo3)
{
    if(iNo1 ==0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    
    let iAns = 0;

    if(iNo1 != 0)
    {
        iAns *= iNo1;
    }

    if(iNo2 != 0)
    {
        iAns *= iNo2;
    }

    if(iNo3 != 0)
    {
        iAns *= iNo3;
    }
    
    return iAns;
}

function main()
{
    let iValue1 = 0;
    let iValue2 = 0;
    let iValue3 = 0;
    let iRet = 0;

    iValue1 = 0, iValue2 = 0, iValue3 = 0;        //testing

    iRet = mult(iValue1, iValue2, iValue3);

    console.log("Multiplication of 3 numbers is :", iRet);
}

main()