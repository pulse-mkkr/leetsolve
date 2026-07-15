//or could be just return n ;

public class arr {
    public static int gcdOfOddEvenSums(int n) {
        if(n==1) return n;
        int osum=n*n;
        int esum=n*(n+1);
        for(int i=n;i>1;i--){
            if(osum%i==0&&esum%i==0) return i;
        }
        return 1;
    }
    public static void main(String[] args) {
        int a=135;
        int ans =gcdOfOddEvenSums(a);
        System.out.println(ans);
    }
}
