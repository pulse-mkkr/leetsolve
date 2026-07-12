// Retry with hashmaps or whatever


class test{
    public static void main(String[] args) {
        int arr[]={37,12,28,9,100,56,80,5,12};    //5,9,12,12,28,37,56,80,100   
        int brr[][]=new int [2][arr.length];
        for(int i=0;i<arr.length;i++){
            brr[0][i]= arr[i];
        }
            for(int i=0;i<brr[0].length;i++){
                int smt=brr[0][i]; 
                for(int j=i;j<brr[0].length;j++){
                    if(brr[0][j]<smt){
                        smt=brr[0][j];
                    }
                } 
                for(int k=i;k<brr[0].length;k++){
                    if(brr[0][k]==smt){
                        int temp = brr[0][i];
                        brr[0][i]=brr[0][k];
                        brr[0][k]=temp;
                    }
                }
            }
        int rank =1;
        brr[1][0]=rank;
        for(int i =1;i<brr[0].length;i++){
            if(brr[0][i-1]!=brr[0][i]){
                rank++;
                brr[1][i]=rank;
                }
                else brr[1][i]=rank;
            }   
            System.out.println();

        for(int i=0;i<brr[0].length;i++){
            System.out.println(brr[0][i]+" -> "+brr[1][i]);
        }   
        int copy[]=arr.clone(); 
        for(int a=0;a<arr.length;a++){
            for(int b=0;b<arr.length;b++){
                if(copy[b]==brr[0][a]){
                    arr[b]=brr[1][a];
                    continue;
                }
            }
        }
        System.out.println();
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
