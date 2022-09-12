#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    string rev; 
    int l=name.length()-1;
    while(l>=0)
    {
        rev=rev+name[l];
        l--;
    }
      cout<<rev;
      
      return 0;
}