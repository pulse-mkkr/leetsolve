//2640. Find the Score of All Prefixes of an Array

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>cn(n);
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(nums[i],mx);
            int t=nums[i]+mx;
            cn[i]=t;
            if(i==0)continue;
            else{
                cn[i]=cn[i-1]+cn[i];
            }
        }
        return cn;
    }
};
