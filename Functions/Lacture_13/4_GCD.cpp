#include <iostream>
using namespace std;
int Gcd(int a,int b){
while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    // return a;
    cout<<a;
}
    int main()
{
    int a,b;
    cin>>a>>b;
    Gcd(a,b);
    return 0;
}