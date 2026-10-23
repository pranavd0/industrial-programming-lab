//problem:check whether the number is prime or not

#include<stdio.h>
#include<stdlib.h>

void checkPrime(int iNo)
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
    
    if(iSum == 1)
    {
        printf("%d is a prime number.\n",iNo);
    }
    else
    {
        printf("%d is not a prime number.\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    checkPrime(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)