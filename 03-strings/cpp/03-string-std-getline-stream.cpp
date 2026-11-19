//problem: Accept and print name of user

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;

    cout<<"enter your Full Name\n";
    getline(cin,name);      //get line reads a whole line into the string           

    cout<<"Your Name is :"<<name<<"\n";

    return EXIT_SUCCESS;
}