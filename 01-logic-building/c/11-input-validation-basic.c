#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNo=0;

    printf("Enter number : \n");
    if(scanf("%d",&iNo) != 1)
    {
        printf("Invalid Input\n");

        return EXIT_FAILURE;
    }

    printf("Input is Valid\n");

    return EXIT_SUCCESS;
}
