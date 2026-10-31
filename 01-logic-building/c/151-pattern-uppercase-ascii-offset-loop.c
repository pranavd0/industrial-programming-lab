//Problem on Pattern Printing:
/*
    input   :   4
    output  :   A   B   C   D   
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 'A'; iCnt < 'A' + iNo; iCnt++ )
    {
        printf("%c\t",iCnt);
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