#include<stdio.h>
#include<stdlib.h>

void display(int arr[] , int iLength)
{
    int icnt = 0;
    printf("Elements of array are : \n");
    for(icnt = 0; icnt < iLength; icnt++)
    {
        printf("%d\n", arr[icnt]);
    }
  
}

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

   display(ptr , iSize);

   //step 3 : Free the memory
   free(ptr);

   return EXIT_SUCCESS;
}