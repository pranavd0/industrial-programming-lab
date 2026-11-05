//problem: find the value of : even factorial - odd factorial : of given number

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    if(iNo < 0)     //updater
    {
        iNo=-iNo;
    }

    int iEvenFact = 0, iOddFact = 0, iCnt = 0, iAns = 0;

    for(iCnt = 1, iEvenFact = 1, iOddFact = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact *= iCnt;
        }
        else
        {
            iOddFact *= iCnt;
        }
    }

    iAns = iEvenFact - iOddFact;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("factorial Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}