#include<stdio.h>
#include<stdlib.h>

int summation(int arr[] , int iLength)
{
    int icnt = 0 , isum = 0;
   
    for(icnt = 0; icnt < iLength; icnt++)
    {
        isum = isum + arr[icnt];
    }
    return isum;
  
}


int main()
{
   int *ptr = NULL;
   int iSize = 0, icnt = 0 , iret = 0;

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

   iret = summation(ptr , iSize);
   printf("sum of all elements is : %d\n", iret);

   //step 3 : Free the memory
   free(ptr);

   return EXIT_SUCCESS;
}