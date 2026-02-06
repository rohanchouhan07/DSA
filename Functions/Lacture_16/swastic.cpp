/* 
*     * * * *
*     *
*     *
* * * * * * * 
      *     *
      *     *
* * * *     *      
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=n;i++){
        // first row
        if(i==1){
            {
                cout<<"* ";
                for(int j=1;j<n-1;j++){
                    cout<<"* ";
                }
            }
        }
    }
}