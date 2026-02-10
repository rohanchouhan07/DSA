#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>  a;
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(6);
    // a.push_back(7);
    // a.push_back(7);
    // a.push_back(7);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a.push_back(i);
    }
    // size
    cout<<a.size()<<endl;
    // capacity
    cout<<a.capacity()<<endl<<"normal array \t";
    for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
    }
    cout<<endl<<"delete last element \t";
    a.pop_back();
    for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
    }
    cout<<endl<<"add element \t";
    a.insert(a.begin()+2,(5,5));
    for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
    }
    return 0;
}