#include<iostream>
using namespace std;
int maxi(int arr[n],int n)
{
    int ans=[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    return ans;
}

int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<max(arr,n);
    return 0;
}