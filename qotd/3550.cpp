//3550. Smallest Index With Digit Sum Equal to Index

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int d=nums[i];
            int sum=0;
            while(d){
                sum+=(d%10);
                d/=10;
            }
            if(sum==i)return i;
        }
        return -1;
    }
};
