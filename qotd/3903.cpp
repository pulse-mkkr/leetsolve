//3903. Smallest Stable Index I

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>premx(n);
        premx[0]=nums[0];
        for(int i=1;i<n;i++){
            premx[i]=max(premx[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            nums[i]=min(nums[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if((premx[i]-nums[i])<=k)return i;
        }
        return -1;
    }
};
