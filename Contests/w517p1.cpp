//4038. Count Integers Appearing in a Single Block

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int>check(101);
        for(int i=0;i<n;i++){
            if(i==0||nums[i]!=nums[i-1])check[nums[i]]++;
        }
        int ans=0;
        for(int i=1;i<=100;i++){
            if(check[i]==1)ans++;
        }
        return ans;
    }
};
