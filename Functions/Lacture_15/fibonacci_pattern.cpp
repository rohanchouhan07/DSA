#include<iostream>
using namespace std;
int fibo(int g){
    if(g<=1) return g;
    return fibo(g-1)+fibo(g-2);
}
int main(){
    int n,i,j,g=0;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<fibo(g)<<" ";
            g++;
        }
        cout<<endl;
    }
}