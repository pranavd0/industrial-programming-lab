#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////
//
//  Function Name:  checkEven
//  Input        :  Integer
//  Output       :  Boolean
//  Description  :  Check Number is Even or Odd
//  Date         :  09/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////
bool checkEven(
                int iNo
              )
{
    if((iNo % 2) == 0)                      //bussiness logic
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
    int iValue=0;
    bool bRet=false;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=checkEven(iValue);

    if(bRet==true)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is Odd\n");
    }

    return EXIT_SUCCESS;
}
