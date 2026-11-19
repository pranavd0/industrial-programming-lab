//problem: check whether thee given number is greater than 100 or not

function chckGreater(iNo)
{
    let bRet = false;

    if(iNo > 100)
    {
        return true;
    }

    return false;
}

function main()
{
    let iValue = 0;
    let iRet = 0;

    iValue = 90;        //testing

    iRet = chckGreater(iValue);

    if(iRet)
    {
        console.log("Number is Greater than 100");
    }
    else
    {
        console.log("Number is Less than 100");
    }
}

main()