//calculator
#include<iostream>
using namespace std;
int main()
{
    int a,b,opp;
    cout<<"enter opperation you want"<<endl<<"1.addition 2.subtraction 3.multiplication 4.division"<<endl;
    cin>>opp;
    cout<<"enter your numbers"<<endl;
    cin>>a>>b;
    if(opp==1)
    cout<<(a+b);
    else if(opp==2)
    cout<<(a-b);
    else if(opp==3)
    cout<<(a*b);
    else if(opp==4)
    cout<<(a/b);
    else
    cout<<"invalid input";
    return 0;
}