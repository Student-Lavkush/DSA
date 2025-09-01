#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}

int main() {
   int arr[] ={10,30,20,10,40,90};

   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"before reverse-";
   printarray(arr,size);
   int i =0;
   int j = size-1;
   int temp;
   while (i<=j)
   
   {
    temp = arr[i];
    arr[i]= arr[j];
    arr[j] =temp;
    i++;
    j--;
   }
   cout<<"your reverse array is - ";
   for(int i =0;i<size;i++){
    cout<<arr[i]<<"\t";
   }
   cout << endl;
   
    
    return 0;
}
