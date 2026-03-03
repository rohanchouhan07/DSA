#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(int i=0 ;i<n+20;i++){
        if(arr[i]==t){
            cout<<i<<" ";
            break;
        }
    }
}