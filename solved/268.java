// TRY with BitManipulationlater

class Solution {
    public int missingNumber(int[] nums) {
        int t=(nums.length*(nums.length+1))/2;
        int arsum=0;
        for(int i=0;i<nums.length;i++){
            arsum+=nums[i];
        }
        return t-arsum;
    }
}
