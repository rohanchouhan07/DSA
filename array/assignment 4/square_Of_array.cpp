#include <iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int square[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        square[i]=arr[i]*arr[i];
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=n-1;j++){
    //         if(square[j]>square[j+1]){
    //             swap(square[j],square[j+1]);
    //         }
    //     }
    // }
    for(int i=0;i<n;i++){
        cout<<square[i]<<" ";
    }

}