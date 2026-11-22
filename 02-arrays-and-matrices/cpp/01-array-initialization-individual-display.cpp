#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iCnt = 0;

    cout<<"elements of The Array Are:\n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    return EXIT_SUCCESS;
}