//4020. Elevator Requests I

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int prev=0;
        int ans=0;
        for(int f:requests){
            ans+=abs(prev-f);
            prev=f;
        }
        return ans;
    }
};
