#include<iostream>
using namespace std;
int greatest(int x, int y)
{
    return(x>y)?x:y;
}
int greatest(int x,int y, int z)
{
    return greatest(greatest(x,y),z);
}
int main()
{
    int x,y,z;
    cout<<"enter your numbers"<<"\n";
    cin>>x;
    cin>>y;

    cin>>z;
    cout<<greatest(x,y);
    cout<<greatest(x,y,z);
    return 0;
}
