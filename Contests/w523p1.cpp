//Q1. Three Fibonacci Sum

class Solution {
public:
    bool threeFibonacciSum(int n) {
        int f1=0,f2=1,f3=1;
        while((f1+f2+f3)<=n){
            if((f1+f2+f3)==n)return true;
            int tf=f2+f3;
            f1=f2;
            f2=f3;
            f3=tf;
        }
        return false;
    }
};
