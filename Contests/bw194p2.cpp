//4089. Count Subarrays With Loose Bounds

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0,cnt=0;
        for(int i:nums){
            if(i>=minK&&i<=maxK)cnt++;
            else cnt=0;
            ans+=cnt;
        }
        return ans;
    }
};
