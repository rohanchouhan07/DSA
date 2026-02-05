// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n,g=0,sum=0;
//     cin>>n;
//     while(n>0){
//         int bn=n%10;
//         sum=sum+bn*pow(2,g);
//         g++;
//         n=n/10;
//     }
//     cout<<sum;
//     return 0; 
// }

#include<iostream>
using namespace std;

int fibo (int n){
if(n<=1){ return n;}
 
return fibo(n-1)+fibo(n-2);
}
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        cout<<fibo(i);
    }
    return 0;
}