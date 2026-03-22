#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i ; i<s.size();i++){
      for(int j=i+1 ; j<s.size();j++){
            if(s[i]==s[j]){
                cout<<-1;
            }
            else{
                cout<<s[i];
                break;
            }
        }  
    }
}