//problem:check whether given number is divisible by 5 or not

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("%d is Divisible by 5\n",iNo);
    }
    else
    {
        printf("%d is Not Divisible by 5\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}