#include<stdio.h>
#include<stdlib.h>

int main()
{
   float arr[4] = {0.0f};
   int icnt = 0;

   printf("Enter the elements of array : \n");
   for(icnt = 0; icnt < 4; icnt++)
   {
        scanf("%f", &arr[icnt]);
   }

   printf("Elements of array are : \n");
   for(icnt = 0; icnt < 4; icnt++)
    {  
        printf("%f\n", arr[icnt]);
    }

    return EXIT_SUCCESS;
}