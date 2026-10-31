//Problem on Pattern Printing:
/*
    input   :   iRow = 4
                iCol = 4

    output  :   A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D   
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1; i <= iRows; i++)
    {   
        for(j = 1, ch = 'A'; j <= iCols; j++, ch++)
        {
            printf("%c\t", ch);   
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