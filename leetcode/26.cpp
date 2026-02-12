#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k=0;
    vector<int> nums={1,1,3,4,5};
    int u={};

    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[u]){
                    u++;
                    nums[u]=nums[i];

            }
            }
            cout<<u+1;
        }