//problem: return average of digits a number

#include<stdio.h>
#include<stdlib.h>

float averageDigits(int iNo)
{
    if(iNo == 0)    //filter
    {
        return 0;
    }

    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;
    
    if(iNo < 0)     //updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum += iDigit;
        iNo= iNo/10;
        iCount++;
    }

    fAvg = (iSum / iCount);     //need of type casting

    return fAvg;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    fRet = averageDigits(iValue);

    printf("Average of digits : %f\n", fRet);

    return EXIT_SUCCESS;
}