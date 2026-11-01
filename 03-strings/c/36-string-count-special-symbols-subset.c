//problem : count Special Symbols in input string ($ % & # *)

#include<stdio.h>
#include<stdlib.h>

int countSpecial(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == '$') || (*str == '#') || (*str == '%') || (*str == '&') || (*str == '*'))
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

    iRet = countSpecial(Arr);

    printf("Frequency of Special characters :%d\n", iRet);
    
    return EXIT_SUCCESS;
}