#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNo1 = 0xAD56;
    int iNo2 = 0xFD77;

    int iAns = 0;

    iAns = iNo1 | iNo2;

    printf("%d\n",iAns);        

    return EXIT_SUCCESS;
}