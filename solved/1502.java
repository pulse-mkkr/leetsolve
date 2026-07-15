//P-1502-> Sorted array->checked constant with loop

class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        int brr[]=arr.clone();
        for(int i=0;i<brr.length;i++){
            int smt=brr[i];
            for(int j=i;j<brr.length;j++){
                if(brr[j]<smt){
                    int temp=brr[j];
                    brr[j]=smt;
                    smt=temp;
                }
                brr[i]=smt;
            }
        }
        int cons=brr[1]-brr[0];

        for(int k=2;k<brr.length;k++){
            if((brr[k]-brr[k-1])!=cons) return false;
        }
        return true;
    }
}
