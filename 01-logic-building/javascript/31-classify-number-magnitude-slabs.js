//problem : 1. Write a prograrn which accept number from user and if number is less than 50 then print small,
//          if it is greater than 50 and less than 100 then print medium, 
//          if it is greater than 100 then print large

function checkNumber(iNo)
{
    let cAns = "/0";

    if(iNo <= 50)
    {
        cAns = "small";
    }
    else if(iNo > 50 && iNo <= 100)
    {
        cAns = "medium";
    }
    else
    {
        cAns = "large";
    }

    return cAns;
}

function main()
{
    let iValue = 0;
    let cResult = "\0";

    iValue = 50;

    cResult = checkNumber(iValue);

    console.log(cResult);
}

main();