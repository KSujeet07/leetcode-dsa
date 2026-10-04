class Solution {
public:

    bool helper(vector<int>& nums, int i, int count) {

        int n = nums.size();
 
        if(i == n) {
            return count <= 1;
        }

        if(nums[i] > nums[(i + 1) % n]) {
            count++;
        }

        if(count > 1) {
            return false;
        }

        return helper(nums, i + 1, count);
    }

    bool check(vector<int>& nums) {
        return helper(nums, 0, 0);
    }
};