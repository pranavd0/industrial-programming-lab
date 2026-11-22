#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    cout<<"Enter the Number of Elements\n";
    cin>>iSize;

    // Step 1 : Allocate the Memory
    ptr = new int[iSize];

    // Step 2 : Use The Memory

    // Step 3 : Free the Memory
    delete ptr;
    
    return EXIT_SUCCESS;
}