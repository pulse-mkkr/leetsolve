// 1979. Find Greatest Common Divisor of Array
class Solution {
    public int findGCD(int[] nums) {
        int lgt=Integer.MIN_VALUE;
        int smt=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(lgt<nums[i]) lgt=nums[i];
            if(smt>nums[i]) smt=nums[i];
        }
        return gcd(smt,lgt);
    }
    public int gcd(int m,int n){
        while(n!=0){
            int temp=n;
            n=m%n;
            m=temp;
        }
        return m;
    }
}
