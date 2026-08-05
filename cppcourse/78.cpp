class Solution {
    void ansSet(vector<vector<int>>&ans,int idx,vector<int>e,vector<int>&o){
        if(idx==o.size()){
            ans.push_back(e);
            return;
        }
        ansSet(ans,idx+1,e,o);
        e.push_back(o[idx]);
        ansSet(ans,idx+1,e,o);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;
        ansSet(ans,0,v,nums);
        return ans;
    }
};
