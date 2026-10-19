//problem: CHECK even or odd (define your bool)

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo)
{
    if(iNo % 2 == 0)
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
    int iValue = 0;
    BOOL bRet= FALSE;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return EXIT_SUCCESS;
}