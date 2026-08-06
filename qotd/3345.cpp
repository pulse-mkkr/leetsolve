class Solution {
    int pod(int n){
        int pro=1;
        while(n>0){
            pro=pro*(n%10);
            n=n/10;
        }
        return pro;
    }
public:
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            if(pod(i)%t==0)return i;
        }
        return 100;
    }
};
