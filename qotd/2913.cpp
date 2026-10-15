//2913. Subarrays Distinct Element Sum of Squares I

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int unq=0;
            vector<int>freq(101,0);
            for(int j=i;j<n;j++){
                if(freq[nums[j]]==0){
                    unq++;
                    freq[nums[j]]++;
                }
                ans+=(unq*unq);
            }   
        }
        return ans;
    }
};
