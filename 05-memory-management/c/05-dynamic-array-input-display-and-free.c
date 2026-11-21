#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *ptr = NULL;
   int iSize = 0, icnt = 0;

   printf("Enter number of elements you want : \n");
   scanf("%d", &iSize);

   //step 1 : allocate memory
   ptr = (int *)malloc(sizeof(int) * iSize);

   //step 2 : use the memory
   printf("Enter the elements : \n");
   for(icnt = 0; icnt < iSize ; icnt++)
   {
      scanf("%d", &ptr[icnt]);
   }

   printf("Elements of the array are : \n");
   for(icnt = 0; icnt < iSize ; icnt++)
   {
      printf("%d\n", ptr[icnt]);
   }

   //step 3 : Free the memory
   free(ptr);

   return EXIT_SUCCESS;
}