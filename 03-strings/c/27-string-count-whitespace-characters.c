//problem : count the total number of white spacaes in input string

#include<stdio.h>
#include<stdlib.h>

int countSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = countSpace(Arr);

    printf("Frequency of White Spaces :%d\n", iRet);
    
    return EXIT_SUCCESS;
}