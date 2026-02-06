/*
formula val=valx(i-j)/(j*i)
row=i
column=j
pattern in foam =(i/j)
combination =iCj=i! /  j!(i-j)!


*/ 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val=1;
            for(int j=0;j<=i;j++){
                cout<<val<<" ";
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
 }   
    return 0;
}