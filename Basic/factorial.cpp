#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number";
    cin>>n;
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<fact;
    return 0;
}