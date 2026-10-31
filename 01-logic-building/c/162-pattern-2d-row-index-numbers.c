//Problem on Pattern Printing:
/*
    input   :   iRow = 4
                iCol = 4

    output  :   1   1   1   1
                2   2   2   2
                3   3   3   3
                4   4   4   4   
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0,j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCols; j++)
        {
            printf("%d\t", i);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the Number of Columns :\n");
    scanf("%d", &iValue2);

    pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}