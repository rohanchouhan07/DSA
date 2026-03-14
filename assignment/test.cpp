#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if((m >=11 or m<=0) or (n >=11 or n<=0)){
        return 1;
    }
    else{
        cout<<m<<n;
    }
}