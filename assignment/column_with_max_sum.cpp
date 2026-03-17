#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        
    }
    cout<<"max sum is:",sum;
    return 0;
}