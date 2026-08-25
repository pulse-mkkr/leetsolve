//1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=0,ans=0;
        int winsum=0;
        for(;i<k;i++){
            winsum+=arr[i];
        }
        if((winsum/k)>=threshold)ans++;
        for(;i<n;i++){
            winsum+=arr[i];
            winsum-=arr[i-k];
            if(winsum>=k*threshold)ans++;
        }
        return ans;
    }
};
