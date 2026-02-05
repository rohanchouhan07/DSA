// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n,flag=0;
//     cin>>n;
//     for (int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             flag=1;
//         }
//     }
//     if(flag==0){
//         cout<<"prime ";
//     }
//     else{
//         cout<<"Non-Prime";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n,d=0;
    cin>>n;
    while(n!=0){
        int m=n%10;
        d=d+m;
        n=n/10;
    }
    cout<<d;
}