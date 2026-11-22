#include<iostream>
using namespace std;

float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        iSum += Arr[iCnt];
    }

    return (float)iSum/(float)iLength;
}

int Summation(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        iSum += Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    float fRet = 0.0f;

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

    iRet = Summation(ptr, iSize);
    cout<<"Summation is:"<<iRet<<endl;

    fRet = Average(ptr, iSize);
    cout<<"Average is:"<<fRet<<endl;

    // Step 3 : Free the Memory
    delete [] ptr;
    
    return EXIT_SUCCESS;
}