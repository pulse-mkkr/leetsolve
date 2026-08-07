class Solution {
public:
    void sum(vector<vector<int>> &ans,vector<int> temp,vector<int> &ori,int target,int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0)return;
        for(int i=idx;i<ori.size();i++){
            temp.push_back(ori[i]);
            sum(ans,temp,ori,target-ori[i],i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sum(ans,v,candidates,target,0);
        return ans;
    }
};
