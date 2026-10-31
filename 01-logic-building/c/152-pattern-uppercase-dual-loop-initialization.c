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
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++ )
    {
        printf("%c\t",ch);
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