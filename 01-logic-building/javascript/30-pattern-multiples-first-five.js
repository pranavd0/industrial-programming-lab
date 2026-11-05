//problem : print pattern -> print first 5 multiples of n
//      input : 4
//      output : 4  8   12   16   20   

function printMultiples(iNo)
{
    let iCnt = 0;
    let iMultiple = 0;

    for(iCnt = 1; iCnt <= 5; iCnt ++)
    {
        iMultiple = iNo * iCnt;

        console.log(iMultiple, "\t");
    }
}

function main()
{
    printMultiples(4);
}

main();