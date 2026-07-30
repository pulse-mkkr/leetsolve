// 3014. Minimum Number of Pushes to Type Word I
class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int cost=1,ans=0;
        while(n>0){
            ans+=min(n,8)*cost;
            cost++;
            n-=min(n,8);
        }
        return ans;//distinct chars
    }
};
