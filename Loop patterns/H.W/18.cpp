#include<iostream>
using namespace std;
int main(){
    int i,j,n=7;
    int m=(n+1)/2;
    for(i=1;i<=m;i++){
        for(j=1;j<=n-i+1;j++){
        cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++){
        cout<<"* ";
        }
        cout<<endl;
    }
    for(i=m-1;i>=1;i--){
        for(j=1;j<=n-i+1;j++){
        cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++){
        cout<<"* ";
        }
        cout<<endl;
    }
}
// if(i%2!=0)
// {cout<<"*";
// }
// else{
//     continue;
// }