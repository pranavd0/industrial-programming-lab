#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr = NULL;
   int iSize = 0;

   printf("Enter number of elements you want : \n");
   scanf("%d", &iSize);
   ptr = (int *)malloc(sizeof(int) * iSize);

    return EXIT_SUCCESS;
}