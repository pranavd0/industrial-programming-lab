#include<iostream>
using namespace std;

class Arithmetic
{
    public :
        double No1;
        double No2;

        Arithmetic(double A, double B)
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(10.6,11.6);
    Arithmetic aobj2(20.5,21.6);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}