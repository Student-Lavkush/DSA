
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5,-1);
//     v.push_back(10);
//      v.push_back(20);
//       v.push_back(30);
//      v.push_back(40);
//     for(int i =0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// //------------------------------------
//second code
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
   int n ;
   cout<<"enter the size of first array";
   cin>>n;
   int a[n];
   for(int i = 0;i<n;i++){
       cin>>a[i];
   }
   int m ;
   cout<<"enter the size of Second array";
   cin>>m;
   int b[m];
   for(int j = 0;j<m;j++){
       cin>>b[j];
   }
   vector<int>c;
   int i =0,j=0;
   while(i<n&&j<m){
       if(a[i]<b[j]){
           c.push_back(a[i]);
           i++;
       }
       else{
           c.push_back(b[j]);
           j++;
       }
   }
   while(i<n){
       c.push_back(a[i]);
       i++;
   }
     while(j<m){
       c.push_back(b[j]);
       j++;
   }
   for(int i =0;i<c.size();i++){
       cout<<c[i]<<" ";
   }

    return 0;
}