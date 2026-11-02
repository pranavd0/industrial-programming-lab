#include<iostream>
using namespace std;

class Arithmetic
{
    public :
        float No1;
        float No2;

        Arithmetic(float A, float B)
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(10.6f,11.6f);
    Arithmetic aobj2(20.5f,21.6f);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}