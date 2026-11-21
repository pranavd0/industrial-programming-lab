#include<stdio.h>
#include<stdlib.h>

void display(int ptr[])
{
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);

}
int main()
{
   int arr[5] = { 11,21,51,101,111};
   
   display(arr);  //display(100)

    return EXIT_SUCCESS;
}