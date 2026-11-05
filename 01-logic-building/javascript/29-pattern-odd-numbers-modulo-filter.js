//problem : print pattern -> all odd numbers upto n
//      input : 10
//      output : 1  3   5   7   9   

function print(iNo)
{
    let iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 != 0)
        {
            console.log(iCnt, "\t");
        }
    }
}

function main()
{
    let iValue = 10;

    print(iValue);
}

main();