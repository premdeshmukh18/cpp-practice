#include<iostream>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<count;
}