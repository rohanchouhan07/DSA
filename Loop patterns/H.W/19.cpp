#include<iostream>
using namespace std;
int main(){
    int i,j,m=7,n=m/2;
    for(i=0;i<=n;i++){
        for(j=n-i;j>=0;j--)
            {
            if(j==n)    
            {
                continue;
            }
            cout<<"* ";
            }
            for(j=1;j<=i*2-1;j++){
                cout<<"  ";
            }
            for(j=n-i;j>=0;j--){
                cout<<"* ";
            }
            cout<<endl;
    }
    for(i=n-1;i>=0;i--){
        for(j=n-i;j>=0;j--)
            {
            if(j==n)    
            {
                continue;
            }
            cout<<"* ";
            }
            for(j=1;j<=i*2-1;j++){
                cout<<"  ";
            }
            for(j=n-i;j>=0;j--){
                cout<<"* ";
            }
            cout<<endl;
    }
}