#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    arr[i]=arr[i]*2;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}
//this is modification of arrays by simple for loop method.