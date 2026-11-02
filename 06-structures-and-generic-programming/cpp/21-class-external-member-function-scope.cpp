#include<iostream>
using namespace std;

class Arithmetic
{
    public :
        double No1;
        double No2;

        Arithmetic(double A, double B);
        double Addition();
        double Subtraction();
};

Arithmetic :: Arithmetic(double A, double B)
{
    No1 = A;
    No2 = B;
}

double Arithmetic :: Addition()
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

double Arithmetic :: Subtraction()
{
    double Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithmetic aobj1(10.5,11.6);
    Arithmetic aobj2(20.5,21.6);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Subtraction()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";

    return EXIT_SUCCESS;
}

/*
    *Syntax For the defination of a function outside the class:
        Return_Value Class_Name :: Function_Name(Parameters)
        {
            body
        }

    *For Constructor:
        Class_Name :: Function_Name(Parameters)
        {
            body
        }
*/