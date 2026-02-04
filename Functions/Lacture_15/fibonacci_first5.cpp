#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);//fibo of n=num at position 5
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Fibonacci of "<<i<<" is: "<<fibo(i)<<endl;
    }
}