//problem : Count the freqency of digits in a  given number which are less than 6

#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iAns = 0;

    while(iNo > 0)
    {
        int iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iAns++;
        }

        iNo /= 10;
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<< "enter the Number:\n";
    cin>> iValue;

    iRet = Count(iValue);

    cout<<"Frequency is :"<<iRet <<"\n";

    return EXIT_SUCCESS;
}