#include<stdio.h>
#include<stdlib.h>

void display(int arr[] , int iLength)
{
    int icnt = 0;
    for(icnt = 0; icnt < iLength; icnt++)
    {
        printf("%d\n", arr[icnt]);
    }
  
}
int main()
{
   int brr[5] = { 11,21,51,101,111};
   
   display(brr , 5); 

    return EXIT_SUCCESS;
}