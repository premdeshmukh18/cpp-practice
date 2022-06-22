#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the number";
    cin>>n;
    cout<<"upto which value you want squares";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cout<<n*i<<endl;

    }
    return 0;
}