//209. Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int ans=INT_MAX;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                int len=j-i+1;
                ans=min(ans,len);
                sum-=nums[i];
                i++;//shrinking
            }
            j++;//expanding
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};
