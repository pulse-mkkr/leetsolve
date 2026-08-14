//238. Product of Array Except Self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n=nums.size();
        vector<int> a(n);
        a[0]=1;
        for(int i=1;i<n;i++){//i se pehle ka product
            a[i]=a[i-1]*nums[i-1];
        }
        int mul=1;
        for(int i=n-2;i>=0;i--){//n-1 se pehle ka product
            mul*=nums[i+1];
            a[i]*=mul;
        }
        return a;
    }
};
