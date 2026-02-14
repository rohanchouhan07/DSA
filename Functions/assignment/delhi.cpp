#include<iostream>
using namespace std;

int sum(int n){
	int s=0;
	for(int i=0;i<=sizeof(n);i++){
		int k=n%10;
		s=s+k;
		n=n/10;
	}
	return(s);
}
int main() {
	int n,n1,n2;
	cin>>n>>n1>>n2;
	int su=sum(n);
	int su=sum(n1);
	int su=sum(n2);
    // cout<<su;
	if(su % 4 == 0){
		cout<<"Yes";
	}
	else if(su % 3 == 0){
		cout<<"No";
	}
	
	return 0;
}