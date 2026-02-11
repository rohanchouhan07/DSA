#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int l=0;
    int n;
    cin>>n;
    int og=n;
    int temp;
    temp=n;

    while(n!=0){
        n=n/10;
        l++;
    }
    int sum=0;
    while(temp!=0){
        int k=temp%10;
        sum=sum+pow(k,l);
        temp=temp/10;
    }
    cout<<sum;
    if(sum==og){
        cout<<"amstrom";
    }
}