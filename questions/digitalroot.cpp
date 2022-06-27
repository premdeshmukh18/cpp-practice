#include<iostream>
using namespace std;
    /*int count(int n)
    {   int c=0;
    while(n>0)
    {n=n/10;
    c++;}
    return c;
    }*/

    int lastdigit(int n)
    {
        int l=n%10;
        return l;
    }

    int sum(int n)

    {  int n; 
       
        while(n>0)
        int summation = 0;
        
        
        summation=summation + lastdigit(n);
        n=n/10;
        }
    }



int main()
{   int n;
    cout<<"enter the number";
    cin>>n;
   
  return 0;
}