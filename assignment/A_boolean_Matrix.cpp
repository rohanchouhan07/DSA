#include <iostream>
using namespace std;

int main() {
    bool n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==true){
                a[i][j]=true;
            }
        }
    }

    return 0;
}