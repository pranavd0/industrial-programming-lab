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
    Arithmetic <int> *aobj = new Arithmetic <int> (11,10);       

    cout<<aobj->Addition()<<endl;

    return EXIT_SUCCESS;
}