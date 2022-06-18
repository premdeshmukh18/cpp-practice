#include<iostream>
using namespace std;

int getmax(int a, int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int main()
{
    int a;
    int b;
    cin>>a>>b;
    cout<<getmax(a,b);
    return 0;
}
