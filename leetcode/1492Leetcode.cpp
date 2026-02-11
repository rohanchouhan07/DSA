#include<iostream>
// #include<vector>
using namespace std;
// int main(){
//     int n,k;
//     cin>>n;
//     cin>>k;
//     vector<int> arr;
    
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//            arr.push_back(i);
//            cout<<" ";
//         }    
//     }
//     if(k<=arr.size()){
//         cout<<k-1;
//     }
//     return 0;
// }
int kthFactor(int n, int k) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cnt++;
                if(cnt==k){
                    cout<< i;
                }
            }
        }
        return -1;}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    kthFactor(n,k);
}