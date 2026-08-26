//1109. Corporate Flight Bookings

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n+1,0);
        int len=bookings.size();
        for(int i=0;i<len;i++){
            ans[bookings[i][0]-1]+=bookings[i][2];
            ans[bookings[i][1]]+=(-1*bookings[i][2]);
        }
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+ans[i];
        }
        ans.pop_back();
        return ans;
    }    
};
