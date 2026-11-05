//problem : print pattern-> 
//      input : 5
//      output : $  *   $   *   $   *   $   *   $   *

#include<stdio.h>
#include<stdlib.h>

void print(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("$   *\t");
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