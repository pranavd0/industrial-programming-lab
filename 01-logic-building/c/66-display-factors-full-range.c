//problem:Display all the factors of the given numeber

#include<stdio.h>
#include<stdlib.h>

void displayFactor(int iNo)
{
    int iCnt=0;

    printf("Factors of %d are: \n",iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    displayFactor(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N)