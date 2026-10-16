//input 4
//output: 4 3   2   1

#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt=iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iCount=0;

    printf("Enter the Count:\n");
    scanf("%d",&iCount);
    
    display(iCount);

    return EXIT_SUCCESS;
}