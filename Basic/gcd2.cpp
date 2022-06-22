#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a<b)
    return a;
    else 
    return b;
}



int main()
{
    int a,b;
    cout<<"enter your numbers";
    cin>>a>>b;
    int x= min(a,b);
    int ans=1;
    for(int i=1; i<=x;i++)
    {
        if(a%i==0 and b%i==0)
        {ans=i;}


    } 
    cout<<ans;
    return 0;
}