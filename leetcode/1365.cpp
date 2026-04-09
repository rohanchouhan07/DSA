class Solution {
public:
    int btao(vector<int> nums,int n){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(n>nums[i]){
                cnt++;
            }
        }
        return cnt;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=btao(nums,nums[i]);
        }
        return ans;
            
    }
};