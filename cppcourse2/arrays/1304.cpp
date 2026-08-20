//1304. Find N Unique Integers Sum up to Zero

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n);
        int num=1;
        for(int i=0;i<n-1;i=i+2){
            ans[i]=num;
            ans[i+1]=-1*num;
            num++;
        }
        return ans;
    }
};
