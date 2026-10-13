//56. Merge Intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& itr) {
        int n=itr.size();
        sort(itr.begin(),itr.end());
        vector<vector<int>>ans;
        vector<int>t=itr[0];
        for(int i=1;i<n;i++){
            if(t[1]<itr[i][0]){
                ans.push_back(t);
                t=itr[i];
                continue;
            }
            t[0]=min(t[0],itr[i][0]);
            t[1]=max(t[1],itr[i][1]);
        }
        ans.push_back(t);
        return ans;
    }
};
