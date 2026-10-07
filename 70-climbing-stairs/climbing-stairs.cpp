class Solution {
public:
    int climbs(int n, vector<int>& dp) {
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = climbs(n - 1, dp) + climbs(n - 2, dp);
    }
    int climbStairs(int n) {

        vector<int> dp(n + 1, -1);
        int ans = climbs(n, dp);
        return ans;
    }
};