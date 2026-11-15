//problem : Convert Km to meters

function KMtoMeter(iNo)
{
    let meter = 0;

    meter= iNo *1000;

    return meter;
}

function main()
{
    let iValue = 0, iRet = 0; 

    iValue = 5;
    
    iRet = KMtoMeter(iValue);

    console.log("Distance in Meter is:", iRet,".");
}

main();
