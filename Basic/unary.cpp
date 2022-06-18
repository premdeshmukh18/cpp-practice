#include<iostream>
using namespace std;
int main()
{
    int x=100;
    int y=x++; //postfix unary operator. value of x assign to y first and the x++ happens.
    int z=++x; //prefix unary operator.++x occurs first and then the value of x is assigned to z.
    int a=--x;
    int b=x--;
    x+=10;
    x*=20;

    cout<<x;
    //cout<<x<<endl<<y<<endl<<z<<endl<<a<<endl<<b<<endl;
   
    return 0;

}