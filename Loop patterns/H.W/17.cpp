#include<iostream>
using namespace std;
int main (){
    int i,j,n=7,m=n/2;
    for(i=0;i<=m;i++){
        for(j=m-i;j>=1;j--){
        cout<<"* ";
        }
        cout<<"  ";
        for(j=1;j<=i*2+1;j++){
        cout<<"  ";
        }
        for(j=m-i;j>=1;j--){
            cout<<"* ";
        }
    cout<<endl;
    }
    for(i=m;i>=0;i--){
        for(j=m-i;j>=1;j--){
        cout<<"* ";
        }
        cout<<"  ";
        for(j=1;j<=i*2+1;j++){
        cout<<"  ";
        }
        for(j=m-i;j>=1;j--){
            cout<<"* ";
        }
    cout<<endl;
    }

}