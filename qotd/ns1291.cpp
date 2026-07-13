#include<iostream>
#include<vector>
using namespace std;
int main(){
    int low = 100;
    int high =1000;
    int stn=12,enn=89,m=10;
    vector <int> ans;
    while(stn<high){
        for(int i=stn;i<=enn;i=i+11){
            if(i>high) break;
            if(low<=i&&i<=high){
                ans.push_back(i);
            }
            if(i==enn){
                stn=(stn*10)+((stn%m)+1);
                enn=(((enn/m)-1)*m*m)+enn;
                m*=10;
                continue;
            }
        }

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
    return 0;
}
