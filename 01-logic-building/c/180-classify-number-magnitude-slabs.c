//problem : 1. Write a prograrn which accept number from user and if number is less than 50 then print small,
//          if it is greater than 50 and less than 100 then print medium, 
//          if it is greater than 100 then print large

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* checkNumber(int iNo)
{
    char * cAns = NULL;

    cAns = malloc(8 * sizeof(char));

    if(cAns == NULL)
    {
        printf("Memory Allocation Failed\n");
    }

    if(iNo <= 50)
    {
        strcpy(cAns,"less\0");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        strcpy(cAns, "medium\0");
    }
    else
    {
        strcpy(cAns, "large\0");
    }

    return cAns;
}

int main()
{
    int iValue = 0;
    char * cResult = NULL;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    cResult = checkNumber(iValue);

    printf("%s\n", cResult);

    free(cResult);

    return  EXIT_SUCCESS;
}