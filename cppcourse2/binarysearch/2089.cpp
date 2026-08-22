//2089. Find Target Indices After Sorting Array

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target)high=mid-1;
            else low=mid+1;
        }
        int lb=high+1;
        low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target)low=mid+1;
            else high=mid-1;
        }
        int ub=low-1;
        for(int i=lb;i<=ub;i++){
            ans.push_back(i);
        }
        return ans;
    }
};
