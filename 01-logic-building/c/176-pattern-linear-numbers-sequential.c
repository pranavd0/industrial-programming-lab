//problem : print pattern ->
//      input : 5
//      output : 1  2   3   4   5

#include<stdio.h>
#include<stdlib.h>

void print(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
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