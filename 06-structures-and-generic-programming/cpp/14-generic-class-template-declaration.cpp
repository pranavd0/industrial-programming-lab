#include<iostream>
using namespace std;

template<class T>
class Arithmetic
{
    public :
        T No1;
        T No2;

        Arithmetic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1 + No2;
            return Ans;
        }

        T Subtraction()
        {
            T Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    /*
    Arithmetic aobj1(10.5,11.6);
    Arithmetic aobj2(20.5,21.6);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Subtraction()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";
    */

    return EXIT_SUCCESS;
}