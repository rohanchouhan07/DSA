#include <iostream>
using namespace std;

int main() {
    int n,m,k,s;
    cin>>n>>m;
    cin>>k>>s;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == '.' ){
                s-=3;
            }
            else if(arr[i][j] == '*'){
                s+=5;
            }
            else if(arr[i][j]=='#'){
                continue;
            }
        }
    }
    if(s<=k){
        cout<<"No"<<endl<<s;

    }
    else{
        cout<<"Yes"<<endl<<s;
    }

    return 0;
}