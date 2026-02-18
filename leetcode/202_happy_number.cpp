#include<iostream>
#include<cmath>
using namespace std;

int square(int n){
    return n*n;
}
int main(){
    int n;
    cin>>n;
    int arr[]={};
    while(n!=0){
        int k= n%10;
        cin>>arr[k];
        if(pow(arr[1],2)+pow(arr[2],2)==1){
            cout<<"True";
        }  
        else{
            cout<<"False";
        } 

    }
    return 0;
        }