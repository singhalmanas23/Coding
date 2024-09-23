class Solution {
public:
    bool check(vector<int>& nums, int half, int n, vector<vector<int>>& dp) {
        if (n == 0)
            return false;
        if (half == 0)
            return true;
        if (dp[n][half] != -1)
            return dp[n][half];
        if (nums[n - 1] > half) {
            return dp[n][half] = check(nums, half, n - 1, dp);
        } else {
            return dp[n][half] = check(nums, half - nums[n - 1], n - 1, dp) ||
                                 check(nums, half, n - 1, dp);
        }
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int half = sum / 2;
        vector<vector<int>> dp(n + 1, vector<int>(half + 1, -1));
        if (sum % 2 != 0)
            return false;

        bool ans = check(nums, half, n,dp);
        return ans;
    }
};