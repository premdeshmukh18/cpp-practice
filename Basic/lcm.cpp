#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}

int main()
{
    int a,b;
    cout<<"enter your numbers";
    cin>>a>>b;
    int x= max(a,b);
    int y=(a*b);
    int ans= x;
    for(int i=x;i<=y;i++)
    {
        if(a%i == 0 and b%i == 0)
        {ans=i;
        break;}
    }
    cout<<ans;
    return 0;

}