#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your decimal number";
    cin>>n;
    while(n>0)
    {
        int x= n%2;
        cout<<x;
        n=n/2;
    }
}
