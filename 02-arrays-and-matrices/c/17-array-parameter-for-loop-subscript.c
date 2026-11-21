#include<stdio.h>
#include<stdlib.h>

void display(int ptr[])
{
    int icnt = 0;
    for(icnt = 0; icnt < 5; icnt++)
    {
        printf("%d\n", ptr[icnt]);
    }
  
}
int main()
{
   int arr[7] = { 11,21,51,101,111,121,151};
   
   display(arr);  //display(100)

    return EXIT_SUCCESS;
}