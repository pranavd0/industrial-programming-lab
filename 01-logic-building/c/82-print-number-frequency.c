//problem: accept 2 numbers form user print first number second number of times 

#include<stdio.h>
#include<stdlib.h>

void display(int iNo1,int iNo2)
{
    int iCnt = 0;

    for(iCnt =1; iCnt<=iNo2; iCnt++)
    {
        printf("%d\t",iNo1);
    }
}

int main()
{
    int iValue = 0, iFreq = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iFreq);

    display(iValue,iFreq);

    return EXIT_SUCCESS;
}