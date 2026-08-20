//2529. Maximum Count of Positive Integer and Negative Integer

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int pc=0;
        int nc=0;
        int high=n-1;
        int low=0;
        while(low<=high){//lower bound for 0
            int mid=low+(high-low)/2;
            if(nums[mid]<0)low=mid+1;
            else high=mid-1;
        }
        nc=high+1;
        low=0,high=n-1;
        while(low<=high){//upper bound for 0
            int mid=low+(high-low)/2;
            if(nums[mid]>0)high=mid-1;
            else low=mid+1;
        }
        pc=n-low;
        return max(pc,nc);
    }
};
