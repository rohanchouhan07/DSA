#include<iostream>
using namespace std;
int main(){
    int arr[][5]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,22,0}
    };
    int m,n;
    cin>>m>>n;
    int a[m][n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        
            a[i][j]=0;
            cout<<a[i][j]<<" ";
                
        }   
        cout<<endl;
    }
    return 0;

}