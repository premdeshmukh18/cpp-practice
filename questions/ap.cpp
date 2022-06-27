/*Given three integer, a,d and n. Where a is the first term, d is the common difference of an A.P. 
Calculate the nth term of A.P.  The nth term is given by an = a + (n-1)d */
#include<iostream>
using namespace std;
int main()
{ int a,d,n;
 cout<<"enter 1st term";
 cin>>a;
 cout<<"enter the common difference";
 cin>>d;
 cout<<"enter number n";
 cin>>n;
 cout<<"nth term is "<<(a+((n-1)*d));
 return 0;

}