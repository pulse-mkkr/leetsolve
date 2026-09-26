//4062. Transform Array Using Pair Operations

class Solution {
public:
    bool canTransform(vector<int>& s, vector<int>& t) {
        long long ssum=0,tsum=0;
        for(int i:s)ssum+=i;
        for(int i:t)tsum+=i;
        return (ssum==tsum);
    }
};
