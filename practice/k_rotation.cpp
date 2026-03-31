#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    // int arr[n]={1,2,3,4,5,6,7};
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k; 
    int a=0;
    for(int i=0;i<n/k;i++){
        reverse(arr.begin()+a,arr.begin()+a+k);
        a=a+k;
    }
    reverse(arr.begin()+a,arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}