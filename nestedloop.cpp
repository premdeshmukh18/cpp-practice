#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    cout<<"enter your number";
    cin>>n;
    for(x=1;x<=n;x++)
    {
        for(i=1;i<11;i++)
        {
            cout<<x*i<<endl;
        }
    }
    return 0;
}