#include<iostream>
using namespace std;
bool find_num(int arr[],int n,int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        return 1;

    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cout<<arr[i];
    int num;
    cin>>num;
    if(find_num(arr,n,num)==1)
    cout<<"number is present in array";
    else
    cout<<"number is absent";
    return 0;
}