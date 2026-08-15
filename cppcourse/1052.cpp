//1052. Grumpy Bookstore Owner

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=grumpy.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0)ans+=customers[i];
        }
        int lsati=0;//just count maxloss of satisfaction
        int i=0;
        for(;i<minutes;i++){
            if(grumpy[i]==1)lsati+=customers[i];
        }
        int temp=lsati;
        for(;i<n;i++){
            if(grumpy[i-minutes]==1)temp-=customers[i-minutes];
            if(grumpy[i]==1)temp+=customers[i];
            lsati=max(lsati,temp);
        }
        return ans+lsati;
    }
};
