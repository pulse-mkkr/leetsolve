//453. Minimum Moves to Equal Array Elements

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0,mini=INT_MAX;
        for(int i:nums){
            sum+=i;
            mini=min(mini,i);
        }
        return sum-(mini*nums.size());
    }
};
