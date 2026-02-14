#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,n1,ans;
	cin>>n>>n1;
	for(int i=2;i<=min(n,n1);i++){
		if(n1%i==0 && n%i==0){
         ans=i;
        }
	}
    cout<<ans;
	return 0;
}