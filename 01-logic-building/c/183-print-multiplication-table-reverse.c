//problem : print pattern -> print table of n in reverse order
//      input : 4
//      output : 40  36   32   28   24   20  16  12  8  4   

#include<stdio.h>
#include<stdlib.h>

void printMultiples(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt = 10; iCnt >= 1; iCnt --)
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