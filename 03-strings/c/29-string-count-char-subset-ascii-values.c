//problem : count the total occurances of 'a','b','c','d' in input string

#include<stdio.h>
#include<stdlib.h>

int count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 97) || (*str == 98) || (*str == 99) || (*str == 100))
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

    iRet = count(Arr);

    printf("Frequency :%d\n", iRet);
    
    return EXIT_SUCCESS;
}