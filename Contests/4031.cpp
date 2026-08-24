//4031. Find All Numbers Disappeared in an Array II

class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i=0;
        while(lower<=upper){
            vector<int>t;
            if(i==n){//last remaining range
                t.push_back(lower);
                t.push_back(upper);
                ans.push_back(t);
                break;
            }
            int cn=nums[i];
            if(cn<lower){//lower is greater than cn
                i++;
                continue;
            }
            if(cn>upper){//cn is greater than upper 
                t.push_back(lower);
                t.push_back(upper);
                ans.push_back(t);
                break;
            }
            if(cn==lower){
                lower=cn+1;
                i++;
                continue;
            }
            t.push_back(lower);
            t.push_back(cn-1);
            lower=cn+1;
            i++;
            ans.push_back(t);
        }
        return ans;
    }
};
