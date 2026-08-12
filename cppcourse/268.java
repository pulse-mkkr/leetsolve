//268. Missing Number

class Solution {
    void swap(int[] nums,int a,int b){
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    public int missingNumber(int[] nums) {//cyclic sort
        int n=nums.length;
        int i=0;
        while(i<n){
            if(nums[i]==i||nums[i]==n) i++;
            else swap(nums,i,nums[i]);
        }
        for(i=0;i<n;i++){
            if(nums[i]!=i) return i;
        }
        return n;
    }
}
