//1004. Max Consecutive Ones III

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int nz=0;
        int ans=0;
        int i=0,j=0;
        while(j<n){
            if(nums[j]==0)nz++;
            while(nz>k){
                if(nums[i]==0)nz--;
                i++;
            }
            ans=max(ans,j-i+1);//maximum length with k zeros 
            j++;
        }
        return ans;
    }
};
