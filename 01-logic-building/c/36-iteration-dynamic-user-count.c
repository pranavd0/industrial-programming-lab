#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iCount=0;

    printf("Enter the Count:\n");
    scanf("%d",&iCount);
    
    display(iCount);

    return EXIT_SUCCESS;
}