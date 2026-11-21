#include<stdio.h>
#include<stdlib.h>

void display(int *ptr)
{
    printf("%d\n",*ptr);
}
int main()
{
   int arr[5] = { 11,21,51,101,111};
   
   display(arr);  //display(100)

    return EXIT_SUCCESS;
}