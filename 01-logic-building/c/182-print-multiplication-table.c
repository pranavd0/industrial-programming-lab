//problem : print pattern -> print table of n
//      input : 4
//      output : 4  8   12   16   20   24  28  32  26  40   

#include<stdio.h>
#include<stdlib.h>

void printMultiples(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt = 1; iCnt <= 10; iCnt ++)
    {
        iMultiple = iNo * iCnt;

        printf("%d\t", iMultiple);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter the number\n");
    scanf("%d", &iValue);

    printMultiples(iValue);

    return EXIT_SUCCESS;
}