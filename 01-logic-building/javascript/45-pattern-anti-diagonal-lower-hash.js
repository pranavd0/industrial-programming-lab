//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: *   *   *   *
//              *   *   *   #
//              *   *   #   #
//              *   #   #   #

function pattern(iRow, iCol)
{
    let i = 0;
    let j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j > iCol-i+1)
            {
                process.stdout.write("#\t")
            }
            else 
            {
                process.stdout.write("*\t")
            }
        }

        process.stdout.write("\n\n")
    }
}

function main()
{
    let iValue1 = 0;                   //No. of Rows
    let iValue2 = 0;                   //No. of Cols

    iValue1 = 4, iValue2 = 4;       //testing

    pattern(iValue1, iValue2);
}

main()