//1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int m=accounts.size(),n=accounts[0].size();
        for(int i=0;i<m;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp+=accounts[i][j];
            }
            ans=max(temp,ans);
        }
        return ans;
    }
};
