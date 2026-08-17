//1493. Longest Subarray of 1's After Deleting One Element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        int i=0,j=0;
        int nz=0,no=0;
        while(j<n){
            if(nums[j]==0)nz++;
            else no++;
            while(nz>1){
                if(nums[i]==0)nz--;
                else no--;
                i++;
            }
            if(no>0)ans=max(ans,j-i+1);
            j++;
        }
        if(ans==-1)return 0;
        return ans-1;   
    }
};
