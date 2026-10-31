//Problem on Pattern Printing:
/*
    input   :   4
    output  :  -4   -3   -2   -1    0   
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= 0; iCnt++)
    {
        printf("%d\t",iCnt);
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