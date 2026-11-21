#include<stdio.h>
#include<stdlib.h>

void display(int *ptr)
{
    printf("%d\n", ptr);
}
int main()
{
   int arr[5] = { 10,20,30,40,50};
   printf("%d\n", arr);
   display(arr);

    return EXIT_SUCCESS;
}