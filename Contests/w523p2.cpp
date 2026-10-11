//Q2. Prime Subset Selection I

class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        if(s==1)return {};
        vector<int>ans;
        vector<bool>chk(n+1,0);
        long long t=0;
        for(int i=2;i<n+1;i++){
            if(chk[i]==true)continue;
            for(long long j=1LL*i*i;j<=n;j+=i){
                chk[j]=true;
            }
            if(t+i>s)break;
            t+=i;
            ans.push_back(i);
        }
        return ans;
    }
};
