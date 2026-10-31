//understanding the logic of ascii values
//problem: print all small alphabets

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cCnt = '\0';

    for(cCnt = 'a'; cCnt <= 'z'; cCnt++)
    {
        printf("%c\n",cCnt);
    }

    return EXIT_SUCCESS;
}