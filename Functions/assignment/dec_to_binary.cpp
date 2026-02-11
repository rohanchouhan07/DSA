#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,dec=0;
	cin>>n;
	while(n!=0){
		int k=n%10;
		dec=dec+pow(2,k);
		n=n/10;
        cout<<dec<<" ";
	}
	// cout<<dec;
	return 0;
}