//problem: calculate shopping discout:
// --------------------------------------------
//        Experience            Bonus
//---------------------------------------------
//      below 5 year              5%
//      5 to 10 years            10%
//      above 10 years           15%
//---------------------------------------------

#include<stdio.h>
#include<stdlib.h>

float calculateBonus(int iExp,float fNo)
{
    float fBon = 0.0f;

    if(iExp < 5)
    {
        fBon = (fNo * 5) / 100;
    }
    else if(iExp >= 5 && iExp <= 10)
    {
        fBon = (fNo * 10) / 100;
    }
    else
    {
        fBon = (fNo * 15) / 100;
    }

    return fBon;
}

int main()
{
    float fSal = 0.0f;
    int iYear= 0;
    float fRet = 0.0f;

    printf("Enter your Salary\n");
    scanf("%f",&fSal);

    if(fSal<0.0)
    {
        printf("Inavlid input\n");
        return EXIT_FAILURE;
    }

    printf("Enter your Experience\n");
    scanf("%d",&iYear);

    if(iYear<0)
    {
        printf("Inavlid Experience\n");
        return EXIT_FAILURE;
    }

    fRet = calculateBonus(iYear, fSal);

    printf("Your Bonus : %f\n",fRet);

    return EXIT_SUCCESS;
}