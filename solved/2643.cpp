//2643. Row With Maximum Ones

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ansidx=-1;
        int anscnt=-1;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)cnt++;
            }
            if(cnt>anscnt){
                anscnt=cnt;
                ansidx=i;
            }
        }
        return {ansidx,anscnt};
    }
};
