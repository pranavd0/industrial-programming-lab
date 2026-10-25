//problem: return sum of digits of a number

#include<stdio.h>
#include<stdlib.h>

int sumOfDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    
    if(iNo < 0)         //updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum += iDigit;
        iNo= iNo/10;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = sumOfDigits(iValue);

    printf("Summation of digits : %d\n", iRet);

    return EXIT_SUCCESS;
}