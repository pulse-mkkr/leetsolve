class Solution {
    void print(string e,string w,int k,string &fans,int &cnt){
        if(!fans.empty())return;//passed on edge coz of this
        if(w==""){
            cnt++;
            if(cnt==k){
                fans=e;
                return ;
            }
            else return ;
        }
        
        for(int i=0;i<w.size();i++){
            string temp=w.substr(0,i)+w.substr(i+1);
            print(e+w[i],temp,k,fans,cnt);
        }
    }
public:
    string getPermutation(int n, int k) {
        string abst="123456789";
        string cl=abst.substr(0,n);
        string v="";
        int cc=0;
        print("",cl,k,v,cc);
        return v;
    }
};
