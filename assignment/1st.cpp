#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if((m >=11 and m<=0) and (n >=11 and n<=0)){
        return 1;
    }
    vector<vector<int>> v(n, vector<int>(m)) ;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(i%2==0)
            {
                cout<<v[i][k]<<", ";
                k++;        
                }
            else{
                cout<<v[i][j]<<", ";
                }

    }
    k=0;
}
cout<<"END";
    return 0;
}