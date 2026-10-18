//problem:return sum of factors of number

#include<stdio.h>
#include<stdlib.h>

int sumFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=sumFactors(iValue);

    printf("Summation of Factors of %d is:%d\n", iValue , iRet);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)