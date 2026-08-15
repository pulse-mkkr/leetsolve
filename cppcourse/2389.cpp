//2389. Longest Subsequence With Limited Sum

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());//sort
        vector<int>pref(n);
        vector<int>ans(m);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){//pref sum
            pref[i]=pref[i-1]+nums[i];
        }
        for(int i=0;i<m;i++){//finding
            int low=0,high=n-1;
            int len=0;
            while(low<=high){//binary search
                int mid=low+(high-low)/2;
                if(pref[mid]<=queries[i]){
                    len=mid+1;
                    low=mid+1;
                }
                else high=mid-1;
            }
            ans[i]=len;
        }
        return ans;
    }
};
