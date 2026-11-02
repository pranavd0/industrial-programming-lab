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
    Arithmetic<int> aobj1(10,11);
    Arithmetic<float> aobj2(10.5f,11.6f);        

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}