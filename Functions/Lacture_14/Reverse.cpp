#include<iostream>
using namespace std;    
int main(){
    int n,sum,num=0;
    cin>>n;
    for(int i=0;i<=sizeof(n)+1;i++){
        int sum=n%10;
        num=num*10+sum;
        n=n/10;
    }
    cout<<num;

}

