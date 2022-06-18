#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>0)
     {
         if(x%2==0)
         cout<<"Number is positive and even";
         else
         cout<<"number is positive and odd";
     }
     else if(x<0)
     {
         if(x%2==0)
         cout<<"number is negative and even";
         else 
         cout<<"number is negative and odd";
     }
     else
     cout<<"number is zero";
     return 0;
}