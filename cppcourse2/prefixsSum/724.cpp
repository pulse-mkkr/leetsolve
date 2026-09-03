//724. Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        int partSum=0;
        if(partSum==nums[n-1]-nums[0])return 0;
        for(int i=1;i<n;i++){
            int t=nums[n-1]-nums[i];
            partSum=nums[i-1];
            if(partSum==t)return i;
        }
        return -1;
    }
};
