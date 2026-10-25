//problems on Pattern Printing:
//  print 1 to n numbers

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt =0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter the frequency\n");
    scanf("%d",&iValue);

    pattern(iValue);    

    return EXIT_SUCCESS;
}