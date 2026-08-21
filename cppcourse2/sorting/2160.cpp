//2160. Minimum Sum of Four Digit Number After Splitting Digits

class Solution {
public:
    int minimumSum(int num) {
        int n1=0,n2=0;
        vector<int>n;
        while(num>0){
            n.push_back(num%10);
            num/=10;
        }
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();){
            n1=(n1*10)+n[i++];
            n2=(n2*10)+n[i++];
        }
        return n1+n2;
    }
};
