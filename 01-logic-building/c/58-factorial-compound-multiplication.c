#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }

    return iFact;
}

int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Factorial of %d is: %d\n", iValue, Factorial(iValue));

    return EXIT_SUCCESS;
}