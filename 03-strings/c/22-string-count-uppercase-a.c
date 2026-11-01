//problem : count the occurance of 'A' in input string

#include<stdio.h>
#include<stdlib.h>

int countX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A')
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

    iRet = countX(Arr);

    printf("Occurance of 'A' is :%d\n", iRet);
    
    return EXIT_SUCCESS;
}