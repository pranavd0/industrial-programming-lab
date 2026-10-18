//problem:check whether given number is divisible by 5 or 3 or not

/*
    ------------------------------------
                Operation ||
    ------------------------------------
    Result1     Result2     Final Result
    ------------------------------------
    TRUE        TRUE            TRUE        Short Circuit
    TRUE        FALSE           TRUE        Short Circuit
    FALSE       TRUE            TRUE
    FALSE       FALSE           FALSE
    ------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("%d is Divisible\n",iNo);
    }
    else
    {
        printf("%d is not Divisible\n",iNo);
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