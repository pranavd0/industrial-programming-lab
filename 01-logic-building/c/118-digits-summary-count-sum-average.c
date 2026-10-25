//problem: return count of digits, sum of digits, average of digits a number

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

int countDigits(int iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
        iNo= iNo/10;
        iCount++;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iSum = sumOfDigits(iValue);
    iCount = countDigits(iValue);

    fAvg = ((float)iSum / (float)iCount);

    printf("Number of digits : %d\n", iCount);

    printf("Summation of Digits : %d\n", iSum);

    printf("Average of digits : %.2f\n", fAvg);    

    return EXIT_SUCCESS;
}