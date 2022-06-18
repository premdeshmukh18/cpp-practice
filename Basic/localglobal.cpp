#include<iostream>
using namespace std;
int x=20; // this is global variable.
int main()

{
    int x=10; // this is local variable.
    cout<<x;
    {
        cout<<x;

    }
    return 0;
}

