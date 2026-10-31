//understanding the logic of ascii values
//problem: print ascii table of capital alphabets

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cCnt = '\0';

    for(cCnt = 'A'; cCnt <= 'Z'; cCnt++)
    {
        printf("%d\t%o\t%x\t%c\n",cCnt,cCnt,cCnt,cCnt);
    }

    return EXIT_SUCCESS;
}