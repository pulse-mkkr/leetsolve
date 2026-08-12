//287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;){
            if(nums[nums[i]]==nums[i])return nums[i];
            else if(nums[i]!=i)swap(nums[i],nums[nums[i]]);
        }
        return -1;
    }
};
