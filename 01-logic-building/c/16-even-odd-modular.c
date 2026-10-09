#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//
//  Function Name:  checkEven
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Check Number is Even or Odd
//  Date         :  09/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////
void checkEven(
                int iNo
              )
{
    if((iNo % 2) == 0)                      //bussiness logic
    {
        printf("It is Even number\n");
    }
    else
    {
        printf("It is Odd number\n");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    checkEven(iValue);

    return EXIT_SUCCESS;
}
