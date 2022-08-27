#include<iostream>
using namespace std;
int avg(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {sum=sum+arr[i];}
   int average = sum/double(n);
   return average;
}




int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<avg(arr,n);
    return 0;

}