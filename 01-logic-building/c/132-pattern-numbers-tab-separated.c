//Problem on Pattern Printing:
/*
    input   :   6
    output  :   1       2       3      4       5       6 
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("\t%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter The Number\n");
    scanf("%d", &iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}