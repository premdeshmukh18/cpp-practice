#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cout<<"enter your number";
    cin>>n;
    for(x=2;x<=n;x++)
    {
        if(n%x==0)
        {
            cout<<"smallest divisor is"<<x<<endl;
             break;
        }
       

    }
    return 0;
}