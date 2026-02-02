#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i*2-1;j++){
            if(j%2==0){
                cout<<"!"<<" ";
            }
            else{
               cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}