//problem: calculate shopping discout:
// --------------------------------------------
//        purchase              Rate
//---------------------------------------------
//      below 1000$              0%
//      1000$ to 5000$           10%
//      5000$ and above          20%
//---------------------------------------------

#include<stdio.h>
#include<stdlib.h>

float calculateDiscount(float fNo)
{
    float fDis = 0.0f;

    if(fNo < 1000.0)
    {
        return fDis;
    }
    else if(fNo >= 1000.0 && fNo < 5000.0)
    {
        fDis = (fNo * 10) / 100;
    }
    else
    {
        fDis = (fNo * 20) / 100;
    }

    return fDis;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter your purchase price\n");
    scanf("%f",&fValue);

    if(fValue<0.0)
    {
        printf("Inavlid input\n");
        return EXIT_FAILURE;
    }

    fRet = calculateDiscount(fValue);

    printf("Your Discount is: %f\nYour Discounted Amount is: %f\n",fRet,fValue-fRet);

    return EXIT_SUCCESS;
}