#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v (n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int t;
    int ans=0;
    cout<<"enter target";
    cin>>t;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(t==v[i][j]){
                ans++;
            }
        }
        cout<<endl;
    }
    if(ans>0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}