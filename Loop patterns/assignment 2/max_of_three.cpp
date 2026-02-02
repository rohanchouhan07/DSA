#include<iostream>
using namespace std;
int main(){
int a; cin>>a;
int b; cin>>b;
int c; cin>>c;
if(a>b and a>c)
    {
        cout<<a<<" Is Greater";
    }
    else if(b>a and b>c)
        {
            cout<<b<<" Is Greater";
        }
        else {
            cout<<c<<" Is Greater";
        }
return 0;
}