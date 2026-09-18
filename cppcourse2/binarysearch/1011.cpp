//1011. Capacity To Ship Packages Within D Days

class Solution {
public:
    int helper(vector<int>& o,int d,int m){
        int dc=1;
        int cc=0;
        for(int i:o){
            if(cc+i>m){
                dc++;
                cc=i;
            }
            else cc+=i;
        }
        return dc;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high=0;
        for(int i:weights){
            high+=i;
            low=max(low,i);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int cd=helper(weights,days,mid);
            if(cd>days)low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};
