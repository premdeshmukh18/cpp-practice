/* Given 2 integers a and b. Find the value of a/b, where b is not equal to zero. After computation the answer
should be in double format with precised value.*/


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   
    int a=100;
    int b=20;
   
    double c=(double) a/(double)b;
    
    cout<<std::showpoint<<c; //used to show trailing zeroes
    return 0;
  

     
}