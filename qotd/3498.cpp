//3498. Reverse Degree of a String

class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        int cnt=1;
        for(int i=0;i<n;i++){
            sum+=(('z'+1)-s[i])*cnt;
            cnt++;
        }
        return sum;
    }
};
