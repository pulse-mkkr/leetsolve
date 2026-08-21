//22. Generate Parentheses

class Solution {
public:
    void genans(vector<string>&s,string ans,int lb,int rb,int n){
        if(lb==n&&rb==n){
            s.push_back(ans);
            return;
        }
        if(lb<n){
            genans(s,ans+"(",lb+1,rb,n);
        }
        if(lb>rb and rb<n){
            genans(s,ans+")",lb,rb+1,n);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        genans(ans,"",0,0,n);
        return ans;
    
    }
};
