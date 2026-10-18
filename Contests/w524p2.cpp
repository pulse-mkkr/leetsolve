//4084. Last Visited Cell in a Directional Grid

class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>> chk(m,vector<bool>(n,0));
        int r=0,c=0;
        chk[0][0]=1;
        while(1){
            int a=r,b=c;
            char t=grid[r][c];
            if(t=='L')b--;
            else if(t=='R')b++;
            else if(t=='U')a--;
            else a++;
            if(a<0||b<0||a>=m||b>=n||chk[a][b])break;
            r=a,c=b;
            chk[r][c]=1;
        }
        return {r,c};
    }
};
