#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
    int m=(n+1)/2;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
        if(j==m-i+1 || j==m+i-1){
            cout<<"* ";
            }
        else{
            cout<<"  ";
            }
        }
    cout<<endl;
    }
    for(i=m-1;i>=1;i--){
        for(j=1;j<=n;j++){
        if(j==m-i+1 || j==m+i-1){
            cout<<"* ";
            }
        else{
            cout<<"  ";
            }
        }
    cout<<endl;
    }
}    
