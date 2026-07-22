class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
      ///for 0^    for1^   for2^
        while(mid<=high){
            if(nums[mid]==2) swap(nums[mid],nums[high--]);//if 2 found swap h--and m
            else if(nums[mid]==0) swap(nums[low++],nums[mid++]);//if 0 found swap l-- and m--
            else mid++;//else 1 m++
        }
        return;
    }
};
/*
LeetCode 75 - Sort Colors

Pattern:
Dutch National Flag (3 pointers)

Recognition:
- Array has 3 categories.
- Need in-place partitioning in one pass.

Invariant:
[0...low-1]   -> 0s
[low...mid-1] -> 1s
[mid...high]  -> unknown
[high+1...n-1]-> 2s

Rules:
0 -> swap(low, mid), low++, mid++
1 -> mid++
2 -> swap(mid, high), high--
(do not increment mid)

Time: O(n)
Space: O(1)
*/
