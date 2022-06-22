#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int a=1;
    int b=1;
    int c=0;
    cout<<a<<endl<<b<<endl;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;

    }
    return 0;
}