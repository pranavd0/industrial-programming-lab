#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter Your Name:\n");
    scanf("%s",sName);          //array name is treated as its base address so no need of '&'
    //scanf is the function which accepts input only until first white space

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}