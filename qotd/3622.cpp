//3622. Check Divisibility by Digit Sum and Product

class Solution {
public:
    bool checkDivisibility(int n) {
        int tn=n;
        long long ds=0;
        long long dp=1;
        while(n>0){
            int ld=n%10;
            ds+=ld;
            dp*=ld;
            n/=10;
        }
        return((tn%(ds+dp))==0);
    }
};
