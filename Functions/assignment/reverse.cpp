#include<iostream>
using namespace std;

int rev(int n){
    int s=0;
	for(int i=0;i<=sizeof(n);i++){
		int k=n%10;
		s=s*10+k;
		n=n/10;
	}
	return(s);
}
int main() {re
	int n;
	cin>>n;
	cout<<rev(n);
	return 0;
}