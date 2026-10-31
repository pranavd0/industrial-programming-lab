//Problem on Pattern Printing:
/*
    input   :   4
    output  :  -4
               -3
               -2
               -1
                0
                1
                2
                3
                4   
*/

function pattern(iNo)
{
    let iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)       //O(2N)
    {
        console.log(iCnt);
    }
}

function main()
{
    let iValue = 0;

    iValue = 6;

    pattern(iValue);
}
// Time Complexity : O(2N)

main();