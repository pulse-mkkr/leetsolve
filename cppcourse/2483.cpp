//2483. Minimum Penalty for a Shop

class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>m(n+1);//for no,prefix
        vector<int>y(n+1);//for yes suffix
        int temp=0;
        for(int i=0;i<n;i++){//no
            if(customers[i]=='N')temp++;
            m[i+1]=temp;
        }
        temp=0;
        for(int i=n-1;i>=0;i--){//yes
            if(customers[i]=='Y')temp++;
            y[i]=temp;
        }
        int mn=INT_MAX;
        for(int i=0;i<n+1;i++){//adding both yes and np
            m[i]+=y[i];
            mn=min(mn,m[i]);//and finding min
        }
        for(int i=0;i<=n;i++){
            if(mn==m[i])return i;
        }
        return 0;
    }
};
