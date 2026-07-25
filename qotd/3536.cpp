#include<bits/stdc++.h>
using namespace std;
int maxProduct(int n) {
    //optimized
    int mx1=-1,mx2=-1;//takes ld one by one and assiegn them to mx1,mx2 
    while(n>0){
        int ld=n%10;
        if(ld>=mx1){
            mx2=mx1;
            mx1=ld;
        }
        else if(ld>mx2){
            mx2=ld;
        }
        n/=10;
    }
    return mx1*mx2;

    //without vector
    // string s=to_string(n);
    // sort(s.begin(),s.end());
    // int ans=((s[s.size()-1])-'0')*((s[s.size()-2])-'0');
    // return ans;

    //vector approach
    // vector<int> v;
    // int temp=n;
    // while(temp>0){
    //     v.push_back(temp%10);
    //     temp/=10;
    // }
    // sort(v.begin(),v.end());
    // return (v[v.size()-1])*(v[v.size()-2]);
    
}
int main(){
    int a;
    cout<<"Enter any number :";
    cin>>a;
    int ans=maxProduct(a);
    cout<<"maximum possible product of digits is "<<ans;
    return 0;
}
