//problem :
//  input : 4567
//  output: odd  : 7
//          even : 6
//          odd  : 5
//          even : 4

#include<stdio.h>
#include<stdlib.h>

void identifyDigits(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)         //updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            printf("Odd : %d\n",iDigit);
        }
        else
        {
            printf("Even : %d\n",iDigit);
        }

        iNo= iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    identifyDigits(iValue);

    return EXIT_SUCCESS;
}