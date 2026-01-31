#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v[4];//[] it declares four row. 
    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);
    v[1].push_back(2);
    v[1].push_back(4);
    v[2].push_back(4);
    cout<<"value"<<endl;
    for(int i =0;i<4;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    v[0].pop_back();
    v[0].pop_back();
    cout<<"after pop"<<endl;
    for(int i =0;i<4;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}