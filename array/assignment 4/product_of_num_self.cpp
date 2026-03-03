#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans[n];
    int product=1;
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
        product*=arr[i];        
    }
    for(int i=0 ;i<n;i++){
        ans[i]=product/arr[i];
        cout<<ans[i]<<" ";
    }
}