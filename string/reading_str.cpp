#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter your name"<<endl;
    getline(cin,name); //takes input with spaces
    cout<<"your name is "<<name;
    return 0;

}