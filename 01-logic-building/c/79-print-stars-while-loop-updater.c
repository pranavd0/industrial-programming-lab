//problem: print '*' n times (take n as input) with updater

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    //updater
    if(iCnt < 0)
    {
        iCnt = -iCnt;
    }

    iCnt=1;
    while(iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}