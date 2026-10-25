//4088. Difference Between Peaks and Valleys

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int psum=0,vsum=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])psum+=nums[i];
            else if(nums[i]<nums[i-1]&&nums[i]<nums[i+1])vsum+=nums[i];
        }
        return psum-vsum;
    }
};
