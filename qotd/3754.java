//3754. Concatenate Non-Zero Digits and Multiply by Sum I
//Time Taken 45mins

class Solution {
    public long sumAndMultiply(int n) {
        if(n==0) return 0;  
        long x=0;
        long revx=0;
        long sum=0;
        for(long i=n;i>0;i=i/10){
            if(i%10==0) continue;
            revx =(revx*10)+i%10;
        }
        for(long j=revx;j>0;j=j/10){
            x=(x*10)+j%10;
            sum+=j%10;
        }
        return x*sum;
    }
}
