#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function Name:  Minimum
//  Input        :  Integer, Integer, Integer
//  Output       :  Integer
//  Description  :  Compares 3 numbers
//  Date         :  11/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////
int Minimum(
            int iNo1,
            int iNo2,
            int iNo3
           )
{
    if((iNo1 < iNo2) && (iNo1 < iNo3))
    {
        return iNo1;
    }
    else if((iNo2 < iNo1) && (iNo2 < iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iResult=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);

    iResult=Minimum(iValue1,iValue2,iValue3);

    printf("Minimum is %d\n",iResult);

    return EXIT_SUCCESS;
}