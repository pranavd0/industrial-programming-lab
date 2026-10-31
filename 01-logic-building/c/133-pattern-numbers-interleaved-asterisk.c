//Problem on Pattern Printing:
/*
    input   :   4
    output  :   1   *   2   *   3   *   4   *
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
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