//4014. Minimum Total Price After Applying Discounts

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans=0;
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int pn=prices.size()-1;
        int dn=discounts.size()-1;
        for(int i=pn;i>=0&&dn>=0;i--){
            double fp=((double)prices[i]*((double)100-(double)discounts[dn--]))/100;//greedy approach
            ans+=fp;
            pn--;
        }
        while(pn>=0){
            double fp=prices[pn--];
            ans+=fp;
        }
        return ans;
    }
};
