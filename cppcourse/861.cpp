//861. Score After Flipping Matrix

class Solution {
public:
    int score(const vector<vector<int>> &x){
        int sum=0;
        for(int i=0;i<x.size();i++){
            int pow=0;
            for(int j=0;j<x[i].size();j++){
                pow=pow*2+ x[i][j];
            }
            sum +=pow;
        }
        return sum;
    }

    void fliprow(vector<vector<int>> &a,int l){
        for(int k=0;k<a[0].size();k++){
            a[l][k]=1-a[l][k];
        }
    }
    void flipcol(vector<vector<int>> &a,int m){
        for(int k=0;k<a.size();k++){
            a[k][m]=1-a[k][m];
        }
    }
    int matrixScore(vector<vector<int>>& v) {
        for(int i=0;i<v.size();i++){
            if(v[i][0]==0)fliprow(v,i);
        }
        for(int i=0;i<v[0].size();i++){
            int count=0;
            for(int j=0;j<v.size();j++){
                if(v[j][i]==0) count++;
            }
            if(count>v.size()/2)flipcol(v,i);
        }
        return score(v); 
    }
};
