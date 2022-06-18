#include<iostream>
using namespace std;
int main()
{
    auto a=10;
    auto b=14.5;
    auto c='k';
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name();
    
}