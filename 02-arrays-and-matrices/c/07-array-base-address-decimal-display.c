#include<stdio.h>
#include<stdlib.h>

void display()
{

}
int main()
{
   int arr[5] = { 10,20,30,40,50};
   printf("%d\n", arr);
   printf("%d\n", &arr);
   printf("%d\n", &arr[0]);

    return EXIT_SUCCESS;
}