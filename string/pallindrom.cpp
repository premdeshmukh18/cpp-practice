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
      cout<<rev<<endl;
      if(rev==name)
      cout<<"it is a pallindrom";
      else
      cout<<"it is not a pallindrom";
      return 0;
}