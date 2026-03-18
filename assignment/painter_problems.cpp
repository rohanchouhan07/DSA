#include <iostream>
#include<string>
#include<vector>
using namespace std;
bool canpain(vector<int> &boards,int k,long long m){
    int p=1;
    int t=0;
    for(int i=0;i<boards.size();i++){
        if(t+boards[i]<=m){
            t+=boards[i];
        }
        else{
            p++;
            t=boards[i];
        }
    }
    return p<=k;
}
int main() {
    int k,n;
    cin>>k>>n;
    long long maxi=0;
    long long sum=0;
    vector<int> boards(n);
    for(int i=0;i<n;i++){
        cin>>boards[i];
        }
    for(int i=0;i<n;i++){
        sum+=boards[i];
        maxi=max(maxi,(long long)boards[i]);
    }
    long long s=maxi;
    long long e=sum;
    int ans=-1;
    while(s<=e){
        long long mid=(s+e)/2;
        if(canpain(boards,k,m)){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}