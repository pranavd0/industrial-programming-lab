#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet1 = 0, iRet2 = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    iRet1 = strlen(Arr);
    iRet2 = strlenX(Arr);

    printf("String length is :%d\n", iRet1);
    printf("String length is :%d\n", iRet2);
    
    return EXIT_SUCCESS;
}