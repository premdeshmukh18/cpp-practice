#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p=&x;
    cout<<*p<<"\n";
    x=x+30;
    cout<<*p<<"\n";
    *p=*p+40;
    cout<<x<<"\n";
    return 0;

}