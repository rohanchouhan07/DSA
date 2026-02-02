#include<iostream>
using namespace std;
int main (){
    int i,j,n=5,m=2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            int m=j;
            if(i==1||i==n||j==1||j==n){
                cout<<1<<" ";
            }
            else if(i==j && i==n/2+1){
                cout<<"6 ";
            }
            else {
                cout<<m<<" ";
                m++;
            }

        }
        cout<<endl;
    }
}