//3718. Smallest Missing Multiple of K

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=1;
        for(int i:nums){
            if(i%(k*ans)==0&&i/(k*ans)==1)ans++;
        }
        return ans*k;
    }
};
