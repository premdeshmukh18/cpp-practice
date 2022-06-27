#include<iostream>
using namespace std;
int main()
{   
    int arr[]={2,3,44,5,6,};
    int n= sizeof(arr)/sizeof(arr[0]);
    int flag=0; // use flag as assignment variable when condtions of true and false required
    for(int i=1;i<n;i++) // to handle corner cases compare (i-1) with (i).
    {
        if(arr[i-1]>arr[i])
        flag=1;
    }
    if(flag==0)
    cout<<"sorted";
    else
    cout<<"unsorted";
    return 0;

}