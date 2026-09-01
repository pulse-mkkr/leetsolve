//2507. Smallest Value After Replacing With Sum of Prime Factors


class Solution {
public:
    bool isPrime(int n ){
        if(n==1)return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int smallestValue(int n) {
        
        if(isPrime(n))return n;
        int p=0;
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0&&isPrime(i)){
                int m=n;
                while(m%i==0){
                    p+=i;
                    m/=i;
                }
            }
        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0&&isPrime(n/i)){
                int m=n;
                while(m%(n/i)==0){
                    p+=(n/i);
                    m/=(n/i);
                }
            }
        }
        if(n==p)return n;
        return smallestValue(p);
    }
};
