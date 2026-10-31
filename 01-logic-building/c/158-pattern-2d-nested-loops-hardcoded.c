//Understanding the logic of 2d pattern
//problem : print 3 rows of 4 times *

#include<stdio.h>
#include<stdlib.h>

void pattern()
{
    int i = 0,j = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}

int main()
{
    pattern();
    
    return EXIT_SUCCESS;
}