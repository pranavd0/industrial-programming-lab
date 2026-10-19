//problem: check given chracter is vowel 

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkVowel(char cVal)
{
   if(cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u')
   {
    return TRUE;
   }
   else
   {
    return FALSE;
   }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Charater\n");
    scanf("%c",&cValue);

    bRet=checkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("Character is vowel\n");
    }
    else
    {
        printf("Charater is not vowel\n");
    }

    return EXIT_SUCCESS;
}

