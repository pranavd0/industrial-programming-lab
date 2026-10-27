//problem: check leap year

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkLeap(int iNo)
{
    if(iNo % 4 == 0)
    {
        return true;
    }
    else 
    {
        return false;   
    }
}

int main()
{
    int iYear = 0;
    bool bRet = false;

    printf("Enter Year\n");
    scanf("%d",&iYear);

    bRet = checkLeap(iYear);

    if(bRet)
    {
        printf("It is a leap Year\n");
    }
    else
    {
        printf("It is NOT a leap Year\n");
    }  

    return EXIT_SUCCESS;
}