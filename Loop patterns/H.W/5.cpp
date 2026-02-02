#include<iostream>
using namespace std;
int main(){
    int m,i,j;
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(j=m-i+1;j>=1;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}