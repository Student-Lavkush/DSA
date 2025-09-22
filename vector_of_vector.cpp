#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v1(5);
vector<int>v2(4,1);
vector<int>v3(2,2);
vector<int>v4(6,3);
vector<int>v5(8,4);
vector<int>v6(3,5);
vector<int>v7(9,6);
vector<vector<int>>vv;
vv.push_back(v1);
vv.push_back(v2);
vv.push_back(v3);
vv.push_back(v4);
vv.push_back(v5);
vv.push_back(v6);
vv.push_back(v7);
for(int i =0;i<vv.size();i++){
    for(int j=0;j<vv[i].size();j++){
        cout<<vv[i][j]<<" ";
    }
    cout<<"\n";

}

}