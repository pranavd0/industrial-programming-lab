//problem: print * 5 times (take n as input)

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}