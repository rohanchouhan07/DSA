#include<iostream>
using namespace std;
int main (){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                cout<<"* ";
            }
            else if(i==n/2+1 && i==j){
                cout<<"@ ";
            }
            else {
                cout<<"# ";
            }
    }
    cout<<endl;
}
}