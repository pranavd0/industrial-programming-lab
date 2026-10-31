//understanding the logic of ascii values
//problem: print a to z alphabets with there ascii values

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%d\t%c\n",iCnt,iCnt);
    }

    return EXIT_SUCCESS;
}