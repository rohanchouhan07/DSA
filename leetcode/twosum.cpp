/*

*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> n={2,7,11,15};
    for(int i=0;i<=n.size();i++){
    if(n[i]+n[i+1]==num){
        cout<<(i,i+1);
    }}

}