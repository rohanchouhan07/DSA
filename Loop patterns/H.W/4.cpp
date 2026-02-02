#include<iostream>
using namespace std;
int main(){
    int m,i,j;
    cin>>m;
    for(i=m;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(j=1;j<=m-i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}