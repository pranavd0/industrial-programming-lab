#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge=0;
    float fMarks=0.0f;

    printf("Enter Your Name:\n");
    scanf("%[^'\n']s",sName);         //Enter(\n) remains in input buffer hence it may skip the next inputs      

    printf("Enter Your Age:\n");
    scanf("%d",&iAge);

    printf("Enter Your Marks:\n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your Age is: %d \n",iAge);
    printf("Your Marks is: %f \n",fMarks);

    return EXIT_SUCCESS;
}