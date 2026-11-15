//problem : Calculate Area of Circle

#include<stdio.h>
#include<stdlib.h>

#define PI 3.14

double circleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0; 

    printf("Enter the Radius :\n");
    scanf("%f", &fValue);

    dRet = circleArea(fValue);

    printf("Circle Area is :%lf\n", dRet);
}
