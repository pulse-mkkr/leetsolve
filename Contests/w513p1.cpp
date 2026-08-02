//4010. Maximize Pair Strength Using GCD

class Solution {
public:
    long long gcd(long long a,long long b){
        while(b!=0){
            long long temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long num=1LL*nums[i]*nums[j];
                long long denum=gcd(nums[i],nums[j]);
                num=num/(1LL*denum*denum);
                ans=max(ans,num);
            }
        }
        return ans; 
    }
};
