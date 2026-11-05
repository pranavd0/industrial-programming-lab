//problem : print pattern -> all odd numbers upto n
//      input : 10
//      output : 1  3   5   7   9   

#include<stdio.h>
#include<stdlib.h>

void print(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
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