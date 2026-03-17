#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int flag=0;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                if(arr[i][j]==0);
                flag++;
            }
        }
        // cout<<endl;
    }
    if(flag==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;
}