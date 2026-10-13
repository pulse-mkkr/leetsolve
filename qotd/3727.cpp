//3727. Maximum Alternating Sum of Squares

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int &i: nums)i=i*i;
        sort(nums.begin(),nums.end());
        long long ans=0;
        int i=0,j=n-1;
        while(i<=j){
            if(i==j){
                ans+=nums[j--];
                continue;
            }
            else{
                ans+=nums[j--];
                ans-=nums[i++];
            }
        }
        return ans;
    }
};
