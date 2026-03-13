#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> numbers={7,2,5,6,8,9} ;
 int target=9 ;
        for(int i=0;i<numbers.size();i++){
            if(numbers[i]+numbers[i+1]==target){
                cout<<i<<" "<<i+1;
            }
        }
    }