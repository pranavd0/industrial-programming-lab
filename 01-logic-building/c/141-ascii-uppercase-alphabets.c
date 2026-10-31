//understanding the logic of ascii values
//problem : Print all Capital alphabets

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%c\n",iCnt);
    }

    return EXIT_SUCCESS;
}