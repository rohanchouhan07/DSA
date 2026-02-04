#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int g=0,sum=0;
    while(n>0){
        int d=n%10;
        sum=sum+d*pow(2,g);
        g++;
        n=n/10;
    }
    cout<<sum;
}