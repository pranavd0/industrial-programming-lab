//input 4
//output: 24

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt=0;

    int iSum=0;   //wrong initialisation

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iSum=iSum * iCnt;
    }

    return iSum;
}

int main()
{
    int iCount=0;
    int iResult=0;

    printf("Enter the Count:\n");
    scanf("%d",&iCount);
    
    iResult=Factorial(iCount);

    printf("Factorial is:%d\n",iResult);

    return EXIT_SUCCESS;
}