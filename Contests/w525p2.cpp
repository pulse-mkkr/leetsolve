//4093. Maximize Sum After At Most K Digit Rearrangements

class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long ans=0;
        vector<long long>g;
        for(int i:nums){
            string x=to_string(i);
            sort(x.rbegin(),x.rend());
            long long y=stoll(x);
            g.push_back(y-i);
            ans+=i;
        }
        sort(g.rbegin(),g.rend());
        for(int i=0;i<k&&i<g.size();i++){
            if(g[i]<=0)break;
            ans+=g[i];
        }
        return ans;
    }
};
