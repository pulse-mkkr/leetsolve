//P-Sum of GCD formed pairs

class Solution {
    public long max(int[] sa,long j){
        long gt=Long.MIN_VALUE;
        for(int k=0;k<=j;k++){
            if(gt<sa[k])gt=sa[k];
        }
        return gt;
    }
    public long gcD(long m,long n){
        for(int i=n;i>1;i--){
            if(m%i==0&&n%i==0) return i;
        }
        return 1;
    }
    public long gcdSum(int[] nums) {
        long prefixGcd[]=new long[nums.length];
        for(int i=0;i<nums.length;i++){
            prefixGcd[i]=gcD(nums[i],max(nums,i));
        }
        for(int i=0;i<prefixGcd.length;i++){
            long smt=prefixGcd[i];
            for(int j=i;j<prefixGcd.length;j++){
                if(prefixGcd[j]<smt){
                    long temp=prefixGcd[j];
                    prefixGcd[j]=smt;
                    smt=temp;
                }    
            }
            prefixGcd[i]=smt;
        }
        long ansum=0;
        for(int i=0;i<prefixGcd.length/2;i++){
            ansum+=gcD(prefixGcd[i],prefixGcd[prefixGcd.length-1-i]);
        }
        return ansum;
    }
}
