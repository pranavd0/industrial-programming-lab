#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function Name:  Average
//  Input        :  Integer, Integer, Integer
//  Output       :  float
//  Description  :  Performs Average
//  Date         :  11/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////
float Average(
            int iNo1,
            int iNo2,
            int iNo3
           )
{
    float fAvg=0.0f;

    //typecasting
    fAvg=((float)iNo1+(float)iNo2+(float)iNo3)/2;

    return fAvg;
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    float fResult=0.0f;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);

    fResult=Average(iValue1,iValue2,iValue3);

    printf("Average is %f\n",fResult);

    return EXIT_SUCCESS;
}