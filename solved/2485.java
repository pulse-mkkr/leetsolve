//P-2485
class Solution {
    public int pivotInteger(int n) {
        if(n==1) return n;
        int x=-1;
        int tsum=(n*(n+1))/2;
        for(int i=1;i<=n;i++){
            int fsum=(i*(i+1))/2;
            if(fsum==(tsum-fsum+i)) return i;
        }
        return x;
    }
}
