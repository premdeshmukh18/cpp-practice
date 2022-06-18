#include<iostream>
using namespace std;


    void details(int a, string name="NA", string address ="NA")
{
    cout<<"roll is"<<a<<endl;
    cout<<"name is"<<name<<endl;
    cout<<"address is"<<address<<endl;
}
int main()
{
    details(12,"prem","india");
    cout<<"\n";
    details(13,"prasad");
    cout<<"\n";
    details(19);
    return 0;
}