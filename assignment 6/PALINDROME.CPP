#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="aabb";
    int st=0;
    int ed=s.size()-1;
    int flag=0;
    while(st<ed){
        if(s[st]==s[ed]){
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