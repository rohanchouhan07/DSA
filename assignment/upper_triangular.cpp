#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    // if((n >=100 or n<=2)){
    //     return 1;
    // }
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}