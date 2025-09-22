//using cmp we descending the array with condition x>y
//and condition x<y then we arrange the array in ascending array
#include<iostream>

#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x,int y){
    if(x%2==0&&y%2==0){
    
     return x>y;
    }
     if(x%2!=0&&y%2!=0){
    
     return x<y;
    }
     if(x%2==0&&y%2!=0){
    
     return true; 
    }
     if(x%2!=0&&y%2==0){
    
     return false;
    }
}
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
    cout<<"before sorting";
     for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr.begin(),arr.end(),cmp);
     cout<<"after sorting";
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
