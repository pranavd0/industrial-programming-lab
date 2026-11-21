#include<stdio.h>
#include<stdlib.h>

int main()
{
   int arr[4] = {0};
   int icnt = 0;

   printf("Enter the elements of array : \n");
   for(icnt = 0; icnt < 4; icnt++)
   {
        scanf("%d", &arr[icnt]);
   }

   printf("Elements of array are : \n");
   for(icnt = 0; icnt < 4; icnt++)
    {  
        printf("%d\n", arr[icnt]);
    }

    return EXIT_SUCCESS;
}