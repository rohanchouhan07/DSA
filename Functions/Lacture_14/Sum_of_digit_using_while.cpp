#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    while(n!=0){
        int k=n%10;
        rev=rev+k;
        n=n/10;
    }
    cout<<rev;
}