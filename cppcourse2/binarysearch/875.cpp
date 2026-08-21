//875. Koko Eating Bananas

class Solution {
public:
    bool canEat(vector<int>& piles,int s, int h){
        int n=piles.size();
        int hc=0;
        for(int i=0;i<n;i++){
            if(piles[i]%s==0)hc+=piles[i]/s;//to check hour count
            else hc+=((piles[i]/s)+1);
            if(hc>h)return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=-1;
        int ans=0;
        for(int e:piles) mx=max(mx,e);
        int low=1,high=mx;
        while(low<=high){//binary search on answer
            int mid=low+(high-low)/2;
            if(canEat(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
