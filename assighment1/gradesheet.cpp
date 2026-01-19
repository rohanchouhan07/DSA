#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
            if(n>=90){
                cout<<"A";
            }
            else if(n>=75 && n<=90){
                cout<<"B";
            }
            else if(n>=60 && n<=75){
                cout<<"C";
            }
            else if (n<60){
                cout<<"Fail";
            }        
    return 0;
}