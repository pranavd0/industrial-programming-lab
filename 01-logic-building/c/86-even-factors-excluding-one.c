//problem: accept a number n and print Even Factors of n excluding 1

#include<stdio.h>
#include<stdlib.h>

void printEvenFactor(int iNo)
{
    //updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printEvenFactor(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity: O(N)