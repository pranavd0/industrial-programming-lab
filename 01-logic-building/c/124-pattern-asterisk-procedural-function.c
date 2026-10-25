//problems on Pattern Printing:
//  *   *   *   *   *

#include<stdio.h>
#include<stdlib.h>

void pattern()
{
    int iCnt =0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("*\t");
    }

    printf("\n");
}

int main()
{
    pattern();    

    return EXIT_SUCCESS;
}