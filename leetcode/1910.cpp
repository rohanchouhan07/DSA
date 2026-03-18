#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >>s;
    string substr;
    cin>>substr;
    while(s.length()>0 && s.find(substr)<s.length()){
        s.erase(s.find(substr),substr.length());
    }
    cout<<s;
    return 0;
}