#include<stdio.h>
#include<stdlib.h>

long int Factorial(int iNo)
{
    int iCnt = 0; 
    long int iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
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

    printf("Factorial of %d is: %ld\n", iValue, Factorial(iValue));

    return EXIT_SUCCESS;
}