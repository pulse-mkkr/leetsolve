//4011. Count Subarrays With Even Odd Ratio I

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();//bx<=ay
        int ans=0;
        for(int i=0;i<n;i++){
            int x=0;
            int y=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0) x++;
                else y++;
                if(y==0) continue;
                if(b*x<=a*y) ans++;
            }
        }
        return ans;
    }
};
