#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool balanced(const string& expr){
    stack<char>st;
for(int i =0;i<expr.length();i++){
    char ch = expr[i];
    if(ch=='('){

     st.push(ch);
    }
    else if(ch==')'){
        if(st.empty()){
            return false;
        }
        st.pop();
    }
}
      return st.empty();
}


int main(){
cout<<"Enter the expersion";
string expr;
cin>>expr;
cout<<balanced(expr);
return 0;
}