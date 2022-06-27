#include<iostream>
using namespace std;
bool sortA(int arr[], int n) // we take the parameters in funcion in this way.
{
   for(int i=1;i<n;i++)
   {if(arr[i-1]>arr[i])
   return false;}
   return true;
}

int main()
{  int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
   
   //sortA(arr,n); //we pass array in this way,
    if(sortA(arr,n))
    cout<<"sorted";
    else cout<<"unsorted";
}