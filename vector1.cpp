#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(20);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}