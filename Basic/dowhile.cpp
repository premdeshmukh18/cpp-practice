#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int x;
    cin>>x;
    do{
        cout<<x*i<<"\n";
        i++;
    }
    while(i<11);
    return 0;
}