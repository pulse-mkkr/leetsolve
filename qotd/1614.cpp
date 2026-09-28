//1614. Maximum Nesting Depth of the Parentheses

class Solution {
public:
    int maxDepth(string s) {
        int n=0;
        int ans=0;
        for(char i:s){
            if(i=='('){
                n++;
                ans=max(ans,n);
            }
            else if(i==')') n--;
        }
        return ans;
    }
};
