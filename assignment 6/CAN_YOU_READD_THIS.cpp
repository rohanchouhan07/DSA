#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string s ;
    getline(cin,s);
    
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            if (i != 0) {
                cout << endl;
            }
        }
        cout << s[i];
    }
    cout << endl; 
    return 0;
}