//14. Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        sort(s.begin(),s.end());
        string ans="";
        for(int i=0;i<min(s[0].size(),s[n-1].size());i++){
            char cb=s[0][i];
            char ce=s[n-1][i];
            if(cb==ce)ans+=cb;
            else break;
        }
        return ans;
    }
};
