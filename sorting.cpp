#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(7);
    arr.push_back(10);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(1);
    arr.push_back(6);
    sort(arr.begin(),arr.end());
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}