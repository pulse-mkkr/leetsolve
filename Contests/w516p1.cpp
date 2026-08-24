//4030. Check ASCII Palindromic

class Solution {
public:
    bool isPalindrome(char a,char b){
        string ab="";
        string bb="";
        int ai=a;
        int bi=b;
        int cnt=0;
        while(cnt<8){
            if(ai%2==0)ab="0"+ab;//8bit string formation
            else ab="1"+ab;
            ai=ai>>1;
            cnt++;
        }
        cnt=0;
        while(cnt<8){
            if(bi%2==0)bb="0"+bb;
            else bb="1"+bb;
            bi=bi>>1;
            cnt++;
        }
        string sum=ab+bb;
        int n=sum.size();
        int i=0,j=n-1;
        while(i<=j){
            if(sum[i]==sum[j]){//palindrome checking
                i++;
                j--;
            }
            else return false;
        }
        return true;
        
    } 
    bool isPalindromic(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(isPalindrome(s[i],s[j])){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
