//2091. Removing Minimum and Maximum From Array

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MAX,mindx=-1;
        int mx=INT_MIN,mxidx=-1;
        for(int i=0;i<n;i++){
            if(mn>nums[i]){
                mn=nums[i];
                mindx=i;
            }
            if(mx<nums[i]){
                mx=nums[i];
                mxidx=i;
            }
        }
        int left = min(mindx, mxidx);
        int right = max(mindx, mxidx);

        int fromLeft = right + 1;
        int fromRight = n - left;

        int bothSides = (left + 1) + (n - right);

        return min(fromLeft,min( fromRight, bothSides));
    }
};
