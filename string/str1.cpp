#include<iostream>
using namespace std;
int main(){
    string str="prem";
    cout<<str<<endl;
    str = str+"deshmukh";
    cout<<str<<endl;
    cout<<str.length()<<endl; // gives length of string
    cout<<str.substr(2,5)<<endl;  // gives str starting with index 2 and till next 2 char.
    cout<<str.find("des");   // if substr is present in the str then it gives the index of 1st occurence of substr.
    return 0;
}