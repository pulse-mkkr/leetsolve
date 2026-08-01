class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int maxrow=0;
        int minrow=matrix.size();
        int maxcol=matrix[0].size();
        int mincol=0;
        int toele=matrix.size()*matrix[0].size();
        int count=0;
        vector<int> ans;
        while(count!=toele){
            for(int i=mincol;i<maxcol&&count!=toele;i++){//goes left col ->right col
                ans.push_back(matrix[maxrow][i]);
                count++;
            }
            maxrow++;
            for(int i=maxrow;i<minrow&&count!=toele;i++){//goes upper row to lower row
                ans.push_back(matrix[i][maxcol-1]);
                count++;
            }
            maxcol--;
            for(int i=maxcol-1;i>=mincol&&count!=toele;i--){//goes back right col -> left col
                ans.push_back(matrix[minrow-1][i]);
                count++;
            }
            minrow--;
            for(int i=minrow-1;i>=maxrow&&count!=toele;i--){//gors back lower row -> upper row
                ans.push_back(matrix[i][mincol]);
                count++;
            }
            mincol++;
        }
        return ans;
    }
};
