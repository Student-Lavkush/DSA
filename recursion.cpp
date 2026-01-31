//              sum of n natural number using recursion
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n+sum(n-1);
//     }
// }
// int main(){
//     cout<<"enter the value of n for sum of n natural number-";
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

//.           power
// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     else{
//         return a*power(a,b-1);
//     }
// }
// int main(){
//     cout<<"Enter the value of a,b";
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }

//    ****************gcd-----method 1;
// #include <iostream>
// using namespace std;
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     else{
//         return gcd(b,a%b);
//     }
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a and b";
//     cin>>a>>b;
//     cout<<gcd(a,b);
// }

//               gcd method 2;
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(a==0){
//         return b;
//     }
//     else if(b==0){
//         return a;
//     }
//     else if(a==b){
//         return a;
//     }
//     else if(a>b){
//         return gcd(a-b,b);

//     }
//     else if(b>a){
//         return gcd(a,b-a);
//     }
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b-";
//     cin>>a>>b;
//     cout<<gcd(a,b);
// }

//           fibonacci series
#include<iostream>
using namespace std;
int fib(int n){
    if(n<=2){
        return n-1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
int n;
cout<<"enter the value of n";
cin>>n;
cout<<fib(n);
}