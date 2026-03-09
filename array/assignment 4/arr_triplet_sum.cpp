#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i< n;i++){
		cin>>arr[i];
	}
	int t;
	cin>>t;
	for(int i=0;i<n;i++){
		
		for(int j=1;j< n;j++){

			for(int k=2;k< n;k++){
				if((arr[i]+arr[j]+arr[k]==t) and (arr[i]<arr[j] and arr[j]<arr[k])){
					cout<<arr[i]<<arr[j]<<arr[k]<<endl;
				}
			}
		}
	}

	return 0;
}