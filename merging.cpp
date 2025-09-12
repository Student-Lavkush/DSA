#include<iostream>
using namespace std;
void printarray(int arr[],int n);
void mergesortedarray(int a[],int n,int b[],int m,int c[],int size);

void inputarray(int arr[],int n){
    cout<<"enter the elements";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}
void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout << endl;
}
void mergesortedarray(int a[],int n,int b[],int m,int c[],int size){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else {
            c[k++]=b[j++];
        }
    }
        while(i<n){
            c[k++]=a[i++];
        }
        while(j<m){
            c[k++]=b[j++];
        }
       
    

}

int main(){
    int n;
    cout<<"Enter the size of first array";
    cin>>n;
    int a[n];
    inputarray(a,n);
    printarray(a,n);
    int m;
    cout<<"enter the size of second array";
    cin>>m;
    int b[m];
    inputarray(b,m);
    printarray(b,m);
    int size = n+m;
    int c[size];
    cout<<"element of sorted array is";
    mergesortedarray(a,n,b,m,c,size);
    printarray(c,size);



}