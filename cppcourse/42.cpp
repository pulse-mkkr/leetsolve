//Trapping Rain Water
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> psgt(height.size());
        int gst=-1;
        for(int i=0;i<height.size();i++){//prev grtst 
            psgt[i]=gst;
            if(gst<height[i])gst=height[i];
        }
        gst=-1;
        for(int i=height.size()-1;i>=0;i--){//nxt grtst
            psgt[i]=min(psgt[i],gst);
            if(gst<height[i])gst=height[i];
        }
        int ans=0;
        for(int i=0;i<height.size();i++){//total water = min(prev,nxt)grtst-at ith height
            if(height[i]<psgt[i])ans+=(psgt[i]-height[i]);
        }
        return ans;
    }
};
