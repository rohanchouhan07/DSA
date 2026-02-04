#include<iostream>
using namespace std;    
int main(){
    int n,m;
    cin>>n;
    int bn=0;
    while(n>0){
        m=n%2;
        bn=bn*10+m;
        n=n/2;
    }
    cout<<bn;
    return 0;
}