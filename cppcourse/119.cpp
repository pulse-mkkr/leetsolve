//C(n,r+1) = C(n,r) × (n-r)/(r+1)

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long sum=1;
        for(int i=0;i<=rowIndex;i++){
            ans.push_back(sum);
            sum=sum*(rowIndex-i)/(i+1);
        }
        return ans;
    }
};
