//problem : accept a single charater and determine whether it is an uppercase alphabet,lowercase alphabet, digit, or special charecter

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

char* checkChar(char cVal)
{
    char *cAns = malloc(19 * sizeof(char));

    if(cVal >= 'A' && cVal <= 'Z')
    {
        strcpy(cAns,"UpperCase Alphabet\0");
    }   
    else if(cVal >= 'a' && cVal <= 'z')
    {
        strcpy(cAns,"LpperCase Alphabet\0");
    } 
    else if(cVal >= '0' && cVal <= '9')
    {
        strcpy(cAns,"Digit\0");
    }  
    else
    {
        strcpy(cAns,"Special Character\0");
    }

    return cAns;
}

int main()
{
    char cValue = '\0';
    char* cRet = NULL;

    printf("Enter the Character\n");
    scanf("%c", &cValue);

    cRet = checkChar(cValue);

    if(cRet == NULL)
    {
        printf("Failed to Allocate the memory\n");
    }
    else
    {
        printf("Your Character Type is : %s\n", cRet);
    }

    return EXIT_SUCCESS;
}