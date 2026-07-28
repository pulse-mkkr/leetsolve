//3517. Smallest Palindromic Rearrangement I

class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1)return s;
        string first="";
        string mid="";
        string last="";
        vector<int> freq(26,0);//special arr
        for(int i=0;i<s.size();i++){
            int idx=s[i];
            freq[idx-'a']++;
        }
        for(int i=0;i<freq.size();i++){//creating first half
            int j=freq[i];
            if(j==1)mid.push_back(i+'a');//for mid part in odd
            if(j==0||j==1) continue;
            while(j>1){
                first.push_back(i+'a');
                j=j-2;
            }
            if(j==1)mid.push_back(i+'a');
        }
        last=first;//last part
        reverse(last.begin(),last.end());
        return first+mid+last;
    }
};
