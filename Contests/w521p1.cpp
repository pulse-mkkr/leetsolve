//4065. Rearrange Array by Removing Distinct Values

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int>freq(101,0);
        for(int i:nums){
            freq[i]++;
        }
        int sum=0;
        for(int i:freq)sum+=i;
        while(sum){
            for(int i=0;i<freq.size();i++){
                if(freq[i]==0)continue;
                else {
                    ans.push_back(i);
                    freq[i]--;
                    sum--;
                }
            }
        }
        return ans;
    }
};
