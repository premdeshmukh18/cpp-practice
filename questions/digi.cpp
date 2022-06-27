#include <iostream>
using namespace std;
//this function will give us the sum of digits 
int rec(int n)
{
    if(n==0) return 0;
    return (n%10)+rec(n/10);

}
//this function will help us to do summation again and again till we get the single digit number 

int res(int k)
{
    if(k<10) return k;
    return res(rec(rec(k)));

}
int main(){
    int n;
    cin>>n;
    int k=rec(n);
    cout<<res(k)<<endl;
return 0;
}