#include<iostream>
using namespace std;
int main(){
    string str="premdeshmukh";
    int find=str.find("ooo");
    if(find==string::npos) 
    cout<<"not present"<<endl;
    else
    cout<<"present"<<find<<endl;
    return 0;
}