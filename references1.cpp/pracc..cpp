#include<iostream>
using namespace std;
int main()
{
   string s1="hi" , s2="prem";
   string &&s3  = s1 + s2;
   s3 = "welcome" + s3;
   cout<<s3;
   return 0;
}