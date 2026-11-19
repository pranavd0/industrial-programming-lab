//problem: Find the multiplication of given 3 numbers

function mult(iNo1, iNo2, iNo3)
{
    if(iNo1 == 0)
    {
        if(iNo2 == 0)
        {
            return iNo3;
        }
        else if(iNo3 == 0)
        {
            return iNo2;
        }
        else
        {
            return iNo2*iNo3;
        }
    }
    else if(iNo2 == 0)
    {
        if(iNo3 == 0)
        {
            return iNo1;
        }
        else
        {
            return iNo1*iNo3;
        }
    }
    else if(iNo3 == 0)
    {
        return iNo1 * iNo2;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
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