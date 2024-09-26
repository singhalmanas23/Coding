class Solution {
public:
    int solve(vector<int>& nums, int ind, vector<int>& dp) {
        if (ind < 0)
            return 0;
        if (dp[ind] != -1)
            return dp[ind];
        int take = nums[ind] + solve(nums, ind - 2, dp);
        int notTake = solve(nums, ind - 1, dp);
        return dp[ind] = max(take, notTake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dp1(n, -1);
        vector<int> first(nums.begin(), nums.end() - 1);
        int ans1 = solve(first, n - 2, dp1);
        vector<int> dp2(n, -1);
        vector<int> sec(nums.begin() + 1, nums.end());
        int ans2 = solve(sec, n - 2, dp2);
        return max(ans1, ans2);
    }
};