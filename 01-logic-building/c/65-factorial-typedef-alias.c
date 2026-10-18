#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULL;             //can comapre it with reference of c++ here it used to replace the name of data type 
//type def is included in header(.h) file for the projects

ULL Factorial(int iNo)
{
    int iCnt = 0; 
    ULL iFact = 0;

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

    printf("Factorial of %d is: %lld\n", iValue, Factorial(iValue));

    return EXIT_SUCCESS;
}