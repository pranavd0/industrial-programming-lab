//problem: check voting eligiblity

#include<stdio.h>
#include<stdlib.h>

void isEligible(int iNo)
{
    //filter
    if(iNo<=0)
    {
        printf("Enter Valid Age\n");
        return;
    }

    if(iNo >=18)
    {
        printf("You are eligible\n");
    }
    else
    {
        printf("Your are not eligible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your Age\n");
    scanf("%d",&iValue);

    isEligible(iValue);

    return EXIT_SUCCESS;
}