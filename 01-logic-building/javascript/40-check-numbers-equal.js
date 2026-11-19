//problem: check whther the given 2 numbers are equal or not

function chckEqual(iNo1, iNo2)
{
    let bRet = false;

    if(iNo1 == iNo2)
    {
        return true;
    }

    return false;
}

function main()
{
    let iValue1 = 0;
    let iValue2 = 0;
    let iRet = 0;

    iValue1 = 90, iValue2 = 90        //testing

    iRet = chckEqual(iValue1, iValue2);

    if(iRet)
    {
        console.log("Numbers are Equal");
    }
    else
    {
        console.log("Numbers are not Equal");
    }
}

main()