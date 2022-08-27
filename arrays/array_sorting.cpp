#include<iostream>
using namespace std;
int main()
{   int flag=0;
    int arr[5]={1,2,8,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
    if((arr[i-1])>(arr[i]))
    flag=1;
    }
    if(flag==0)
    cout<<"sorted";
    else
    cout<<"not sorted";
    }
    

