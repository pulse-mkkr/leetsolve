class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int low=0,high=arr.size()-1;
    while(low<high){                  //were checking +1 indx 
        int mid=low+(high-low)/2;
        if(arr[mid+1]>arr[mid]) low =mid+1;
        else high=mid;                //high ==mid cuz high could be peak also ,if mid-1,it can skip potential peak
    }
    return low;
    }
};

// class Solution {                                          //looked for a maxval/pindx here ,which is wrong , i was supposed to find whwere the value could be 
// public:                                                   //so best way is to use upper bound 
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int low=0,high=arr.size()-1;
//     int pindx=0;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>arr[pindx]){
//             pindx=mid;
//             if(arr[mid-1]<arr[mid]) low =mid+1;
//             else high=mid-1;
//         }
//         else{
//             if(arr[mid-1]<arr[mid]) low =mid+1;
//             else high=mid-1;
//         } 
//     }
//     return pindx;
//     }
// };
