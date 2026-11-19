//problem: check whether thee given number is greater than 100 or not

#include<iostream>
using namespace std;

bool chckGreater(int iNo)
{
    bool bRet = false;

    if(iNo > 100)
    {
        return true;
    }

    return false;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number\n";
    cin>>iValue;

    iRet = chckGreater(iValue);

    if(iRet)
    {
        cout<<"Number is Greater than 100\n";
    }
    else
    {
        cout<<"Number is Less than 100\n";
    }
    
    return EXIT_SUCCESS;
}
