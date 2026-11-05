//problem : take single digit from user and print it into word

function spell(iNo)
{
    let cAns = "\0";
    if(iNo < 0)     //updater
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0:
        cAns = "Zero";
        break;

        case 1:
        cAns = "One";
        break;

        case 2:
        cAns = "Two";
        break;

        case 3:
        cAns = "Three";
        break;

        case 4:
        cAns = "Four";
        break;

        case 5:
        cAns = "Five";
        break;

        case 6:
        cAns = "Six";
        break;

        case 7:
        cAns = "Seven";
        break;

        case 8:
        cAns = "Eight";
        break;

        case 9:
        cAns = "Nine";
        break;

        default:
        cAns = "Please Enter Single Digit";
        main();
    }

    return cAns;
}

function main()
{
    let iValue = 0;
    let cResult = "\0";

    iValue = 6;

    cResult = spell(iValue);

    console.log(cResult);
}

main();