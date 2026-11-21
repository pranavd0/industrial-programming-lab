#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr [] = {10,20,30,40};
    int icnt = 0;

    for(icnt = 0; icnt < 4; icnt++)
    {  
        printf("%d\n", arr[icnt]);
    }

    return EXIT_SUCCESS;
}