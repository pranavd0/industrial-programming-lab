//problem: accept a number n and print first n even numbers 

#include<stdio.h>
#include<stdlib.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int iEven = 0;

    for(iCnt = 1, iEven = 2; iCnt<=iNo; iCnt++,iEven+=2)
    {
        printf("%d\t",iEven);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printEven(iValue);

    return EXIT_SUCCESS;
}