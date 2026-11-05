//problem: find Even factorial of a number

#include<stdio.h>
#include<stdlib.h>

int evenFact(int iNo)
{
    if(iNo < 0)     //updater
    {
        iNo=-iNo;
    }

    int iFact = 0, iCnt = 0;

    for(iCnt = 2, iFact = 1; iCnt <= iNo; iCnt+=2)
    {
        iFact *= iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = evenFact(iValue);

    printf("the even of factorial of %d is : %d\n",iValue, iRet);

    return EXIT_SUCCESS;
}