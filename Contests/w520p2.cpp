//4057. Number of Intersecting Interval Pairs II

class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());//sort whole
        vector<int>b;
        vector<int>e;
        for(auto& i: intervals){//filled begin and end eles
            b.push_back(i[0]);
            e.push_back(i[1]);
        }
        sort(b.begin(),b.end());//sort both
        sort(e.begin(),e.end());
        long long ans=1LL*n*(n-1)/2;
        long long na=0;
        int j=0;
        for(int st:b){//count nans
            while(j<n&&e[j]<st)j++;
            na+=j;
        }
        return ans-na;
    }
};
