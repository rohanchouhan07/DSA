#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){ 
            if(j%2==0){cout<<i;}
            else{cout<<2*n-i;}
        }
        cout<<endl;
    }
    for(j=1;j<=n;j++){
        cout<<"  ";
    }
}