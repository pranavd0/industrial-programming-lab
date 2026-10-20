//problem: check triangle validty
//sum of 2 smaller sides should be greater than greater side

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1>iSide2)
    {
        if(iSide1>iSide3)
        {
            if(iSide1<(iSide2+iSide3))
            {
                return true;
            }
        }
        else
        {
            if(iSide3<(iSide1+iSide2))
            {
                return true;
            }
        }
    }
    else
    {
        if(iSide2>iSide3)
        {
            if(iSide2<(iSide1+iSide3))
            {
                return true;
            }
        }
        else
        {
            if(iSide3<(iSide1+iSide2))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    bool bRet = false;

    printf("Enter first side\n");
    scanf("%d",&iValue1);

    if(iValue1<0)
    {
        printf("Inavlid side\n");
        return EXIT_FAILURE;
    }

    printf("Enter second side\n");
    scanf("%d",&iValue2);

    if(iValue2<0)
    {
        printf("Inavlid side\n");
        return EXIT_FAILURE;
    }

    printf("Enter third side\n");
    scanf("%d",&iValue3);

    if(iValue3<0)
    {
        printf("Inavlid side\n");
        return EXIT_FAILURE;
    }

    bRet = checkTriangle(iValue1,iValue2,iValue3);

    if(bRet)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }  

    return EXIT_SUCCESS;
}