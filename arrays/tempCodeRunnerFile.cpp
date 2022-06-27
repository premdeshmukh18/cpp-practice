#include<iostream>
using namespace std;
int distinct_count(int arr[],int n)
{  int count=0;
    for(int i=0;i<n;i++)
    {if(arr[i--]!=arr[i])
    count++;}
  cout<<count;

}



int main()
{
 int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
    distinct_count(arr,n);
}