#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>  a;
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
            cout<<a[i]<<" ";;
    }
    cout<<endl;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
    }
    
    return 0;
}