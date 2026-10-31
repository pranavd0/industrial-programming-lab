//understanding the logic of ascii values
//problem: print first four charecters of capital alphabet

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cCnt = '\0';

    for(cCnt = 'A'; cCnt <= 'D'; cCnt++)
    {
        printf("%c\n",cCnt);
    }

    return EXIT_SUCCESS;
}