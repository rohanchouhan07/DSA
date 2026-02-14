#include<iostream>
using namespace std;

// int series(int n,int t){
//     int sum=0;
//     for(int i=t;i <=3*n+2;i++){
//         if(t%i!=0){
//             return i;
//             sum++;
//             if(sum==n){
//                 break;
//             }
//         }
//     }
//     return 0;
// }
int main(){
    int n,t;
    cin>>n>>t;
    
    
    // cout<<series(n,t);
    
    for(int i=1;i <=50;i+=t)
    {
        if(i%t!=0){
        cout<<i<<" ";}
    }
    
    return 0;
}