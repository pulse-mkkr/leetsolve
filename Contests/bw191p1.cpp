//Q1. Count Values With Equally Spaced Occurrences I©leetcode

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(101);
        int ans=0;
        for(int i:nums){
            freq[i]++;
        }
        vector<vector<int>>chk;
        for(int i=1;i<101;i++){
            if(freq[i]==3){
                vector<int>t;
                t.push_back(i);
                for(int j=0;j<n;j++){
                    if(nums[j]==i)t.push_back(j);
                }
                chk.push_back(t);
            }
        }
        for(int i=0;i<chk.size();i++){
            if((chk[i][2]-chk[i][1])==(chk[i][3]-chk[i][2]))ans++;
        }
        return ans;
    }
};©leetcode
