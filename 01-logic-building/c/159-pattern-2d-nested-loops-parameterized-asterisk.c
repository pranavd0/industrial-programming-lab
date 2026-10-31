//Understanding the logic of 2d pattern
//problem : print 3 rows of 4 times *

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0,j = 0;

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCols; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the Number of Columns :\n");
    scanf("%d", &iValue2);

    pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}