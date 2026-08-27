//34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)return {-1,-1};
        vector<int>ans(2);
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target)high=mid-1;
            else low=mid+1;
        }
        ans[0]=high+1;
        low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target)low=mid+1;
            else high=mid-1;
        }
        ans[1]=low-1;
        if(ans[0] < n && nums[ans[0]] == target)return ans;
        return {-1,-1};
    }
};
