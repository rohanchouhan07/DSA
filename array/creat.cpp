#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int rohan[5];
    // int rohan1[]={};
    int arr[n]; 
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<sizeof()-3*n;
    return 0;
}