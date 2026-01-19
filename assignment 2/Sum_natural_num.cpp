#include<iostream>
using namespace std;
int main()
{
    int s=0,n;
    cout<<"Enter the last number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s+i;
        if(i==n){
            cout<<i<<"=";
        }
        else{
            cout<<i<<"+";
        }
}
    cout<<s;
    return 0 ;
}