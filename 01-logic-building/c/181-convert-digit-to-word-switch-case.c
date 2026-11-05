//problem : take single digit from user and print it into word

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* spell(int iNo)
{
    char * cAns = NULL;

    cAns = malloc(27 * sizeof(char));

    if(cAns == NULL)
    {
        printf("Memory Allocation Failed\n");
    }

    if(iNo < 0)     //updater
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0:
        strcpy(cAns, "zero\0");
        break;

        case 1:
        strcpy(cAns, "One\0");
        break;

        case 2:
        strcpy(cAns, "Two\0");
        break;

        case 3:
        strcpy(cAns, "Three\0");
        break;

        case 4:
        strcpy(cAns, "Four\0");
        break;

        case 5:
        strcpy(cAns, "Five\0");
        break;

        case 6:
        strcpy(cAns, "Six\0");
        break;

        case 7:
        strcpy(cAns, "Seven\0");
        break;

        case 8:
        strcpy(cAns, "Eight\0");
        break;

        case 9:
        strcpy(cAns, "Nine\0");
        break;

        default:
        strcpy(cAns, "Please Enter Single Digit\0");
    }

    return cAns;
}

int main()
{
    int iValue = 0;
    char * cResult = NULL;

    printf("Enter the Digit\n");
    scanf("%d", &iValue);

    cResult = spell(iValue);

    printf("%s\n", cResult);

    free(cResult);

    return  EXIT_SUCCESS;
}