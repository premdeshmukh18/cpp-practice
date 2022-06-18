#include<iostream>
using namespace std;
int main()
{
    int x=10;
    bool y =(x==10)&&(x++); //logical and operator:- true if both conditions are true. otherwise false.
    bool z=(x>111)||(x>11); //logical or operator:- true if any of the conditions is true . false is both conditions are false.
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<z<<endl;
    return 0;
                      //in boolean type 0 is considered as false and any integer other than 0 is true.
}