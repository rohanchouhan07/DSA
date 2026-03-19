#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        // if(isupper(s[i])){
            cout<<isupper(s[i])+islower(s[i])<<endl;
        // }
    }
    return 0;
}