#include<iostream>
using namespace std;

int main(){
    int n,n1;
    cin>>n>>n1;
    for(int i=1;i<=n*10;i++){
        if(i%n==0 and i%n1==0){
            cout<<i;
            break;
        }
    }
}