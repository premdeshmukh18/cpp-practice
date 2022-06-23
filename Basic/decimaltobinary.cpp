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
        n=n/2; //incomplete code due to lack of knowledge of vector as of now
    }
}
