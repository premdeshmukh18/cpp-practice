#include<iostream>
using namespace std;
int main()
{
    /*int a=10;
    int *p=&a;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    int *q=p;
    cout<<*q<<endl;
    cout<<q<<endl;*/
    int i=5;
    int *t=&i;
    (*t)++;
    cout<<*t<<endl;
    cout<<t<<endl;
    t=t+1;
    cout<<t;
    return 0;


}