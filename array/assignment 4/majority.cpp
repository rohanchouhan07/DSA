#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int count=0;
	int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
       for(int j=1;i<=n-i-1;i++){
        if(arr[j]==arr[j+1]){
            count++;
            cout<<arr[j];
        }
        }
    }
	// if(count>0){
	// 	cout<<arr[i];
	// }

	return 0;
}