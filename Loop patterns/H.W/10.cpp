#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n=5;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i*2-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}