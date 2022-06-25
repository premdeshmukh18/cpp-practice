#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,3,3,3,3,32,3};

    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<endl;
     }
     return 0;
}