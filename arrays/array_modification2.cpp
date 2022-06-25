#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,5,6,7,8,9};
    for(int &x: arr)
     x=x*2;
     for(int x:arr)
     cout<<x<<endl;
     return 0;
}
//this is array modification using range based for loop.