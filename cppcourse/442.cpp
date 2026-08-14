//442. Find All Duplicates in an Array


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;){//cyclic sort
            if(nums[i]==i+1||nums[i]==nums[nums[i]-1])i++;
            else swap(nums[i],nums[nums[i]-1]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)ans.push_back(nums[i]);
        }
        return ans;
    }
};
