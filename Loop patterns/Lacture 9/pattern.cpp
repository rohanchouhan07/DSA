#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
            for(i=1;i<=n;i++)
            {
                    for(j=1;j<=n-i+1;j++){
                        cout<<"* ";
                    }
                    //spacea
                for(j=1;j<=2*i-3;j++){
                    cout<<"  ";
                }
                if(i==1){
                    for(j=1;j<=n-i;j++){
                        cout<<"* ";
                    }
                }
                else{
                    for(j=1;j<=n-i+1;j++){
                        cout<<"* ";
                    }
                }
                cout<<endl;
            }

                    // for(j=1;j<=n-i;j++){
                    //     cout<<"  ";
                    // }
                    // for(n=1;n<=i;j++){
                    //     cout<<"* ";
                    // }
                    // cout<<endl;
}