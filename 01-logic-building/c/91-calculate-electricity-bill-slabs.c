//problem: calculate electricity bill:
// --------------------------------------------
//      Units Consumed          Rate
//---------------------------------------------
//      first 100 units      $5 per unit
//      next 100 units       $7 per unit
//      above 200 units      $10 per unit
//---------------------------------------------

#include<stdio.h>
#include<stdlib.h>

float calculateBill(float fNo)
{
    float fBill = 0.0f;

    if(fNo <= 100.0)
    {
        fBill = fNo * 5;
    }
    else if(fNo <= 200.0)
    {
        fBill = (100 * 5) + ((fNo-100) * 7); 
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((fNo - 200) * 10);
    }

    return fBill;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter units consumed\n");
    scanf("%f",&fValue);

    fRet = calculateBill(fValue);

    printf("Your bill is: %f\n",fRet);

    return EXIT_SUCCESS;
}