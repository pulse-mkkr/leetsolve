//493. Reverse Pairs

class Solution {
public:
    int merge(vector<int>& v,vector<int>& a,vector<int>& b){
        int cnt=0;
        int i=0,j=0,k=0;
        while(i<a.size()&&j<b.size()){//inversion counting
            if(a[i]>(1LL*2*b[j])){//overflow
                cnt+=(a.size()-i);
                j++;
                }
            else i++;
        }
        i=0,j=0;
        while(i<a.size()&&j<b.size()){//merge
            if(a[i]<=b[j])v[k++]=a[i++];
            else v[k++]=b[j++];
        }
        while(i<a.size())v[k++]=a[i++];
        while(j<b.size())v[k++]=b[j++];
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        if(n==1) return 0;
        int n1=n/2,n2=n-n/2;
        vector<int>a(n1),b(n2);
        for(int i=0;i<n1;i++){
            a[i]=nums[i];
        }
        for(int i=0;i<n2;i++){
            b[i]=nums[n1+i];
        }
        c+=reversePairs(a);//mergeSort calls
        c+=reversePairs(b);
        c+=merge(nums,a,b);
        return c;
    }
};
