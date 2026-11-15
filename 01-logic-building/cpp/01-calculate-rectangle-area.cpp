//problem : Calculate Area of rectangle

#include <iostream>
using namespace std;

double circleArea(float fHeight, float fWidth)
{
    double dArea = 0.0;

    dArea = fHeight * fWidth;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0; 

    cout<<"Enter the Height :\n";
    cin >> fValue1;

    cout<<"Enter the Width :\n";
    cin >> fValue2;

    dRet = circleArea(fValue1, fValue2);

    cout << "Circle Area is :"<< dRet <<"\n";
}
