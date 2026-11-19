//problem: accept total marks and obtained marks and calculate percentage

function percentage(iTotal, iObtained)
{
    let fRet = 0.0; 

    fRet = (iObtained/iTotal)*100;

    return fRet;
}

function main()
{
    let iValue1 = 0;
    let iValue2 = 0;
    let fRet = 0.0;

    iValue1 = 100, iValue2 = 90;       //testing

    fRet = percentage(iValue1, iValue2);

    console.log("Percentage is :",fRet,"%");
}

main()