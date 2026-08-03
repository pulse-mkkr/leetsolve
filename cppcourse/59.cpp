class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int maxrow=0;
        int minrow=n;
        int maxcol=n;
        int mincol=0;
        int toele=n*n;
        int count=1;
        vector<vector<int>> ans(n,vector<int>(n));
        while(count<=toele){
            for(int i=mincol;i<maxcol&&count<=toele;i++){
                ans[maxrow][i]=count;
                count++;
            }
            maxrow++;
            for(int i=maxrow;i<minrow&&count<=toele;i++){
                ans[i][maxcol-1]=count;
                count++;
            }
            maxcol--;
            for(int i=maxcol-1;i>=mincol&&count<=toele;i--){
                ans[minrow-1][i]=count;
                count++;
            }
            minrow--;
            for(int i=minrow-1;i>=maxrow&&count<=toele;i--){
                ans[i][mincol]=count;
                count++;
            }
            mincol++;
        } 
        return ans;
    }
};
