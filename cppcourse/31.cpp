#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& nums) {
    for (int x : nums)
        cout << x << " ";
    cout << endl;
}
void nextPermutation(vector<int>& nums) {
    //Find pvt
    int n=nums.size();
    int pvt=-1;
    for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
            pvt=i-1;
            break;
        }
    }
    if(pvt==-1) return reverse(nums.begin(),nums.end());
    //find smallest lgt
    for(int i=n-1;i>pvt;i--){
        if(nums[i]>nums[pvt]){
            swap(nums[i],nums[pvt]);//swap
            break;
        }
    }
    //reverse after pvt
    reverse((nums.begin()+(pvt+1)),nums.end());
}
int main() {
    vector<int> nums = {1,2,7,4,3,1};
    cout << "Before: ";
    print(nums);
    nextPermutation(nums);
    cout << "After : ";
    print(nums);
    return 0;
}
