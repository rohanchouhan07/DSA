#include<iostream>
using namespace std;
int main()
{
    int sal,exp;
    cin>>sal;
    cin>>exp;
    if(exp>=5)
    {
        cout<<(sal*10)/100;
        }
    else{
        cout<<"0";
    }
    return 0;
}