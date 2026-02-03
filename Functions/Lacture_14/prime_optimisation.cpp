#include<iostream>
using namespace std;
int prime(int n){
    bool ans=true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                cout<<i;
            }              
        }
if(ans==true){
    cout<<"Prime number";
    }
else{
    cout<<"Not a prime number";
    }
}

int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}


//contsicutive non prime numbes 13 {114,115,116,117,118,119,120,121,122,123,124,125,126 }