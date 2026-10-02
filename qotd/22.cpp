//22. Generate Parentheses

class Solution {
    void gen(vector<string>&ans,string s,int ob,int cb,int n){
        if(cb==n&&ob==n){
            ans.push_back(s);
            return ;
        }
        if(ob<n)gen(ans,s+'(',ob+1,cb,n);
        if(cb<ob)gen(ans,s+')',ob,cb+1,n);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen(ans,"",0,0,n);
        return ans;
    }
};
