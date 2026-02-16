#include<iostream>
// #include<cmath>
using namespace std;

int lenght(int n){
    int l=0;
    while(n!=0){
        n=n/10;
        l++;
    }
    return l;
}

int reverse(int n){
    int rev=0;
    while(n!=0){
        int k=n%10;
        rev=rev*10+k;
        n=n/10;
    }
    return rev;
}

int main(){

    int n;
    cin>>n;
    int rev=1;
    int len=lenght(n);
    while(n!=0){
    int k=n%10;
    int inv=9-k;
    if(len==0 && inv==0 ){
        rev=rev*10+k;
        len--;
    }
    if(inv > k){
        rev=rev*10+k;
        len--;
    }
        
    else{
        rev=rev*10+inv;
        len--;
    }
    n=n/10;
}
cout<<reverse(rev)/10;
return 0;
    
}