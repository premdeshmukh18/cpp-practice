#include<iostream>
using namespace std;
int main()
{   int T;
    cin>>T;
    while(T--){
    long n;
    cin>>n;
    if(n==1)
    cout<<"0"<<endl;
    else if(n%2==0)
    cout<<((n/2)*(n/2)*2)<<endl;
    else
    cout<<((n/2)*((n/2)+1)*2)<<endl;
    
}
return 0;}