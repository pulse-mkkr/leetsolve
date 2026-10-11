//2778. Sum of Squares of Special Elements 

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),idx=1,ans=0;
        for(int i:nums){
            if(n%idx==0)ans+=(i*i);
            idx++;
        }
        return ans;
    }
};
