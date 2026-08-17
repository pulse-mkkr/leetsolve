//713. Subarray Product Less Than K

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int cnt=0;
        int p=1;
        int i=0,j=0;
        while(j<n){
            p*=nums[j];
            while(p>=k){
                p/=nums[i];
                i++;
            }
            cnt+=(j-i+1);
            j++;
        }
        return cnt;
    }
};
