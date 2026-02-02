#include<iostream>
using namespace std;
int main()
{
    int n,n2,n3;
    cin>>n;
    cin>>n2;
    cin>>n3;
    if(n>n2 && n>n3)
    {
        cout<<n;
        }
    else if(n2>n && n2>n3)
    {
        cout<<n2;
    }
    else {
        cout<<n3;
    }
    return 0;
}