class Solution {
public:
    int robs(vector<int>& nums , int i , vector<int>& arr){
        if(i<0) return 0;
        if(arr[i] != -1) return arr[i];

        int notRob = robs(nums , i-1 , arr);
        int currentRob = nums[i] + robs(nums , i-2, arr);

        return arr[i]=max(notRob , currentRob);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr( n, -1);

        return robs(nums , n-1 , arr);
    }
};