#include<iostream>
using namespace std;
int main(){
    int n,target,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter taget";
    cin>>target;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<i+1;
        }
        else{
            flag ++;
        }
    }
    if(flag==n){
        cout<<"NOT FOUND";
    }
    
    return 0;
}