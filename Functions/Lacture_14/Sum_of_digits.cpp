#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=sizeof(n);i++){
        int k=n%10;
        sum=k+sum;
        n=n/10;
    }
    cout<<abs(sum)<<sum;
}