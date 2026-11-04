#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int iNo = 14;
    unsigned int iAns = 0;

    iAns = ~iNo;

    printf("%u\n",iAns);        //4294967281

    return EXIT_SUCCESS;
}