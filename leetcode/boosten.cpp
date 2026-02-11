#include<iostream>
using namespace std;

int sumdig(int n){
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum+=k;
        n=n/10;
    }
    return sum;
}

bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        else{   
            return true;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int sum=sumdig(n);
    int fact=0;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            if(prime(i)){
                fact+=sumdig(i);
            }
            n=n/i;
        }
    }
    cout<<sum<<endl;
    cout<<fact<<endl;
    if(sum==fact){
        cout<<"boston";
    }
    else{
        cout<<"not";
    }

}