#include<iostream>
using namespace std;
int main(){
    int n,dig;
    cin>>n;
    cin>>dig;
    int sum=0;
    for(int i=0;i<=sizeof(n);i++){
        int m=n%10;
        if(m==dig){
            sum+=1;
        }
        n=n/10;
    }
    cout<<sum;
    return 0;
}