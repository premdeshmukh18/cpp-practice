#include<iostream>
using namespace std;
int mac(int arr[],int n)
{
   
    int ans=arr[0];
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
    cout<<mac(arr,n);
    return 0;
}