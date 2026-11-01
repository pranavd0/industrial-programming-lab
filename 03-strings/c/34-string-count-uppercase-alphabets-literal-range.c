//problem : count all Captial case characters in input string

#include<stdio.h>
#include<stdlib.h>

int countCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    iRet = countCapital(Arr);

    printf("Frequency of Capital letters :%d\n", iRet);
    
    return EXIT_SUCCESS;
}