#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int iNo = 14;
    unsigned int iAns = 0;

    iAns = ~iNo;

    printf("%d\n",iAns);        //-15

    return EXIT_SUCCESS;
}