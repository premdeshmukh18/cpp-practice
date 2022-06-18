#include <iostream>
#include<vector>
using namespace std;
void printarr(vector<int> arr){
    for (int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool unique(vector<int> arr){
    sort(arr.begin(), arr.end());
    vector<int>occurnece;
    int k =1;
    for (int i =0;i<arr.size();i++){
        if(arr[i]== arr[i+1]){
            k++;
        }
        else{
            occurnece.push_back(k);
            k=1;
        }
    }
    for (int i =0;i<occurnece.size();i++){
        if(i%2 ==0){
            return false;
        }
    }
    printarr(occurnece);
    return true;
}

int main(){
    vector<int> k;
    k.push_back(2);
    k.push_back(1);
    k.push_back(2);
    k.push_back(1);
    k.push_back(1);
    k.push_back(2);


    cout<<unique(k)<<endl;
}