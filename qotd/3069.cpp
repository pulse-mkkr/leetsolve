//3069. Distribute Elements Into Two Arrays I

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        vector<int>b;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(a.back()>b.back()) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        for(int ele:b){
            a.push_back(ele);
        }
        return a;
    }
};
