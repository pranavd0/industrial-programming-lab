//problem: check whether the number is less than 10 or not if true print hello otherwise print demo

#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    display(iValue);

    return EXIT_SUCCESS;
}