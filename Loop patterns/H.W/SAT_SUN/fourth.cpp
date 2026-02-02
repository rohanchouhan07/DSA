#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    
    for(i=1;i<=n/2+1;i++){
        for(j=i;j>=1;j--){
            cout<<"  ";
        }
        for(j=i*2;j<=n+1;j++){
            if(i==2){
                cout<<j<<" ";}
                else {cout<<j<<" ";}
            }
            cout<<endl;
    // for(i=n/2;i>=1;i--){
    //     for(j=i;j>=1;j--){
    //         cout<<"  ";
    //     }
    //     for(j=n;j>=i*2-1;j--){
    //         if(j%2==0){
    //             cout<<0<<" ";}
    //         else
    //         {   cout<<1<<" ";}
    //     }  
    //     cout<<endl;
    // }
    
}
}