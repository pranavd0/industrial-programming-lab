#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNo = 14;
    int iAns = 0;

    iAns = iNo >> 3;        //value decreases by /(2^3)

    printf("%d\n",iAns);

    return EXIT_SUCCESS;
}