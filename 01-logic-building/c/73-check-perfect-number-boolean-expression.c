//problem:check whether the number is perfect or not(a perfect number have the sum of its all factors equal to number itself)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPerfect(int iNo)
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
    
    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=checkPerfect(iValue);

    if(bRet)
    {
        printf("%d is a perfect number.\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number.\n",iValue);
    }

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)