#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
            for(i=n;i>=1;i--)
            {
                    for(j=1;j<=n-i+1;j++){
                        cout<<"* ";
                    }
                    //space
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
}