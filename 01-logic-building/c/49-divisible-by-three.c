//problem:check whether given number is divisible by 3 or not

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("Number is Divisible by 3\n");
    }
    else
    {
        printf("Number is Not Divisible by 3\n");
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