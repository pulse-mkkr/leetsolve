class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0)return 0;
        if(s>9*n)return -1;
        int ans=0;
        while(n>0){
            int d=min(9,s);
            ans=(ans*10)+d;
            s=s-d;
            n--;
        }
        return ans;
        
    }
};
