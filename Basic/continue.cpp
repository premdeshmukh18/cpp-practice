#include<iostream>
using namespace std;
int main()
{
    int i,x;
    cout<<"enter your number";
    cin>>x;
    for(i=1;i<11;i++)
    {  
       if(i%x==0)
       continue;
      
       cout<<x<<endl;
    }
    return 0;
}