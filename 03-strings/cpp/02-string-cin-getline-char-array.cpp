//problem: Accept and print name of user

#include<iostream>
using namespace std;

int main()
{
    char name[30];

    cout<<"enter your Full Name\n";
    cin.getline(name,30);          

    cout<<"Your Name is :"<<name<<"\n";

    return EXIT_SUCCESS;
}