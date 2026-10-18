//problem:check whether the number is perfect or not(a perfect number have the sum of its all factors equal to number itself)

#include<stdio.h>
#include<stdlib.h>

void checkPerfect(int iNo)
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
    
    if(iSum == iNo)
    {
        printf("%d is a perfect number.\n",iNo);
    }
    else
    {
        printf("%d is not a perfect number.\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    checkPerfect(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)