#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{   
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
void swa_alternates(int arr[], int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if((i+1)<n)
        {swap(arr[i],arr[i+1]);}
    }
   
}
int main()
{
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<n;i++)
    cout<<arr[i];
    
    swa_alternates(arr,10);
    printarray(arr,10);

    return 0;
}