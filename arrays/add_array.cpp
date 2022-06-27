#include<iostream>
using namespace std;
int add(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    return sum;
}


int main()
{ 
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    cout<<add(arr,n);
    return 0;

}