class Solution {
public:
    int BinarySearch(vector<int>&nums, int target , int start, int end){
        if(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) {
                return BinarySearch(nums, target, mid+1 , end);
            }
            else{
                return BinarySearch(nums,target,start, mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums, target , 0 ,nums.size()-1) ;



        //using LOOP 
        //int left = 0,
        //     right = nums.size() - 1;
        
        // while(left<=right)
        // {
        //     int mid = (left + right ) / 2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
        //     else if(target > nums[mid]){
        //         left = mid+1;
        //     }
        //     else 
        //     {
        //         right = mid-1; 
        //     }
        // }

        // return -1;
        
    }
};