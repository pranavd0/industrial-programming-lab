#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function Name:  Average
//  Input        :  Integer, Integer
//  Output       :  float
//  Description  :  Performs Average
//  Date         :  11/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////
float Average(
            int iNo1,
            int iNo2
           )
{
    float fAvg=0.0f;

    fAvg=(iNo1+iNo2)/2;

    return fAvg;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fResult=0.0f;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    fResult=Average(iValue1,iValue2);

    printf("Average is %f\n",fResult);

    return EXIT_SUCCESS;
}