//problem: change the case of the charater

#include<stdio.h>
#include<stdlib.h>


void changeCase(char cVal)
{
    //uppercase->lowercase
    if(cVal >= 'A' && cVal <= 'Z')
    {
        cVal += ('a' - 'A');
        printf("%c\n",cVal);
    }
    //lowercase->uppercase
    else if(cVal >= 'a' && cVal <= 'z')
    {
        cVal += ('A' - 'a');
        printf("%c\n",cVal);
    }
    else 
    {
        printf("Please Enter a Single Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Charater\n");
    scanf("%c",&cValue);

    changeCase(cValue);

    return EXIT_SUCCESS;
}

