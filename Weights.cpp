#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int w,a,b,c;
        cin>>w>>a>>b>>c;
        if(w==a)
        cout<<"YES"<<endl;
        else if(w==b)
        cout<<"YES"<<endl;
        else if(w==c)
        cout<<"YES"<<endl;
        else if(w==(a+b))
        cout<<"YES"<<endl;
        else if(w==(b+c))
        cout<<"YES"<<endl;
        else if(w==(c+a))
        cout<<"YES"<<endl;
        else if(w==(a+b+c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}