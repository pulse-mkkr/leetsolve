//4070. Minimum Rotations to Dial a Number I

class Solution {
public:
    int minRotations(string s) {
        int p = 0, ans = 0;
        for (char c : s) {
            int x = c - '0';
            int d = abs(x - p);//<-this
            ans += min(d, 10 - d);
            p = x;
        }
        return ans;
    }
};
