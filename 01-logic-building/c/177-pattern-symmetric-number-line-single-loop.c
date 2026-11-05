//problem : print pattern -> number line of n
//      input : 3
//      output : -3 -2  -1  0   1  2   3   

#include<stdio.h>
#include<stdlib.h>

void print(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt ++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter the number\n");
    scanf("%d", &iValue);

    print(iValue);

    return EXIT_SUCCESS;
}