#include<iostream>
#include<vector>
using namespace std;
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans=nums;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
int main(){
    vector<int> nums={1,2,1};
    vector<int> ans=getConcatenation(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}