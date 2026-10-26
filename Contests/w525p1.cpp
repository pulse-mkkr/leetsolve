//4092. Binary Digit Score

class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=setBits(a),s2=setBits(b);
        if(s1>=s2)return s1*s2;
        return s2/s1;
    }
    int setBits(int n){
        int cnt=0;
        while(n){
            cnt++;
            n=n&(n-1);
        }
        return cnt;
    }
};
