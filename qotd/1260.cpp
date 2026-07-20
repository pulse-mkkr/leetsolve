//counted total elements shifted one by one 
//will optimize

#include<bits/stdc++.h>
using namespace std;
void print(const vector<vector<int>> &x){
    for(int i=0;i<x.size();i++){
        for(int j=0;j<x[0].size();j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int nofele=grid.size()*grid[0].size();
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        k=k%nofele;
        int count=0;
        if(k==0) return grid;
        while(k!=count){
            for(int i=0;i<=m;i++){
                for(int j=0;j<=n;j++){
                    if(i==m&&j==n) continue;
                    int temp =grid[i][j];
                    grid[i][j]=grid[m][n];
                    grid[m][n]=temp;
                }
            }
            count++;
        }
        return grid;
    }
int main (){
    vector<vector<int>> r ={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Enter times you wanna rotate : ";
    int x ;
    cin>> x;
    print(shiftGrid(r,x));
    return 0;
}
