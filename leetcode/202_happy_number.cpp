#include<iostream>
#include<cmath>
using namespace std;

bool isHappy(int n) {
        int  sum=0;
        if(n==1 or n==7 or n==10){
        cout<<"Happy";
    }
    else if(n<10){
        cout<< "Not happy";
    }else{
    while(n!=0){
        int k= n%10;
        sum=sum+k*k;
        n/=10;
        }

        return isHappy(sum);
    }
    }
int main(){
    int n;
    cin>>n;
    isHappy(n);
    // return 0;
        }