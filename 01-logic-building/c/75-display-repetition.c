//problem: display 5 times marvellous

#include<stdio.h>
#include<stdlib.h>

void display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("MArvellous\n");
    }
}
int main()
{
    display();
    
    return EXIT_SUCCESS;
}