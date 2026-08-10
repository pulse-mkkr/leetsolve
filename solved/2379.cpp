//2379. Minimum Recolors to Get K Consecutive Black Blocks

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int cnt=0;
        int ans=0;
        for(int i=0;i<k;i++){//formation of window
            if(blocks[i]=='W')cnt++;
        }
        ans=cnt;
        for(int i=k;i<n;i++){//sliding of window
            if(blocks[i]=='W')cnt++;//adding new ele
            if(blocks[i-k]=='W')cnt--;//removing 
            ans=min(ans,cnt);
        }
        return ans;
    }
};
