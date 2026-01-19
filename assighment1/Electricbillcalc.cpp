#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=100)
    {
        cout<<n*2;
        }
    else if(n>=100 && n<=200)
    {
        cout<<n*3;
    }
    else {
        cout<<n*5;
    }
    return 0;
}