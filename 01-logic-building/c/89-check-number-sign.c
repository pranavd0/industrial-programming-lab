//problem: check whether the given number is positive negative or zero

#include<stdio.h>
#include<stdlib.h>

void checkNumber(int iNo)
{
    if(iNo>0)
    {
            printf("%d is positive\n", iNo); 
    }
    else if(iNo <0)
    {
        printf("%d is negative\n", iNo);
    }
    else
    {
        printf("Number is Zero\n");        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    checkNumber(iValue);

    return EXIT_SUCCESS;
}

