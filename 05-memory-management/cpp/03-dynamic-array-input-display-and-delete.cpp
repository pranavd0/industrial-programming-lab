#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;

    cout<<"Enter the Number of Elements\n";
    cin>>iSize;

    // Step 1 : Allocate the Memory
    ptr = new int[iSize];

    // Step 2 : Use The Memory
    cout<<"Enter the Elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of The Array Are:\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    // Step 3 : Free the Memory
    delete [] ptr;
    
    return EXIT_SUCCESS;
}