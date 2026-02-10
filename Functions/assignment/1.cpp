#include<iostream>
#include<climits>
using namespace std;
int even(int n){
    int even=0;
    for(int i=0;i<=sizeof(n+1);i++){
        int m=n%10;
        if(i%2==0){
            even+=m;
        }
        n=n/10;
}
return even;
}
int odd(int n){
    int odd=0;
    for(int i=0;i<=sizeof(n+1);i++){
        int m=n%10;
        if(i%2!=0){
            odd+=m;
        }
        n=n/10;
    }
    return odd;
}
int main(){
    int n,m;
    cin>>n;
    if(n<0 || n>=INT_MAX){
        return 1;
    }
    cout<<even(n)<<endl;
    cout<<odd(n);

    }