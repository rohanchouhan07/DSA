class Solution {
public:
    int count(int n){
        int cnt=0;
        while(n>0){
            n=n/10;
            cnt++;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int ss=0,ans=0;
        for(int i=0;i<nums.size();i++){
            ss=count(nums[i]);
            if(ss%2==0){
                ans++;
            }
        }
        return ans;
    }
};
#include<iostream>
#include<vector>
using namespace std;
int main(){
    Solution s;
    vector<int> nums={12,345,2,6,7896};
    int ans=s.findNumbers(nums);
    cout<<ans;
}