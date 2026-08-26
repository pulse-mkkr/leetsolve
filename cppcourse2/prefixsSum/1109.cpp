//1109. Corporate Flight Bookings

class Solution {
public:
    void fillval(vector<int>&ans,int idx,int lidx,int val){
        for(int i=idx-1;i<=lidx-1;i++){
            ans[i]=ans[i]+val;
        }
    }
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int len=bookings.size();
        vector<int>ans(n);
        for(int i=0;i<len;i++){
            fillval(ans,bookings[i][0],bookings[i][1],bookings[i][2]);
        }
        return ans;
    }
};
