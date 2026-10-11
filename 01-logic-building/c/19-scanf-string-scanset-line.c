#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter Your Name:\n");
    scanf("%[^'\n']s",sName);                 //accept the input until user press enter(\n)
    //this is use of regular expression(rex)       

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}