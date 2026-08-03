//118. Pascal's Triangle
//used ncr+1=ncr*(n-r)/(r+1);

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            int ncr=1;
            for(int j=0;j<=i;j++){
                v.push_back(ncr);
                ncr=ncr*(i-j)/(j+1);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
