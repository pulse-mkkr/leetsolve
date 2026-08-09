class Solution {
    string helper(string con){
        string a="";
        for(int i=0;i<con.size();){
            int freq=0;
            int j=i;
            while(j<con.size()&&con[i]==con[j]){
                freq++;
                j++;
            }
            a+=to_string(freq);
            a+=con[i];
            i=j;
        };
        return a;
    }
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string fans=countAndSay(n-1);
        string e=helper(fans);
        return e;
    }
};
