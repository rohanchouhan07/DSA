#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int st=0;
    int ed=s.size()-1;
    int flag=0;
    while(st<ed){
        if(s[st]=s[ed]){
            flag++;
        }
        st++;ed--;
    }
    if(flag==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}