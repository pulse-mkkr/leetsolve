//1456. Maximum Number of Vowels in a Substring of Given Length

class Solution {
public:
    bool isVowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int ans=0;
        int t=0;
        int i=0;
        for(;i<k;i++){
            if(isVowel(s[i]))t++;
        }
        ans=t;
        for(;i<n;i++){
            if(isVowel(s[i]))t++;
            if(isVowel(s[i-k]))t--;
            ans=max(ans,t);
        }
        return ans;
    }
};
