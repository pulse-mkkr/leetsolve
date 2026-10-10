// Q1. Maximum Product Pair With Target Sum

class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(2,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||nums[i]<=nums[j]||nums[i]+nums[j]!=target)continue;
                if(ans[0]==-1||(nums[ans[0]]*nums[ans[1]])<(nums[i]*nums[j])){
                    ans[0]=i;
                    ans[1]=j;
                }
            }
        }
        return ans;
    }
};
