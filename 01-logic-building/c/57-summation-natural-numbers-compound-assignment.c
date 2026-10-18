#include<stdio.h>
#include<stdlib.h>

int summation(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum += iCnt;
    }

    return iSum;
}

int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Addition is: %d\n",summation(iValue));

    return EXIT_SUCCESS;
}