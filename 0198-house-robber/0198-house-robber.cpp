class Solution {
public:
    int solve(vector<int>& nums,int n,int ind, vector<int>&dp){
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int take=nums[ind]+solve(nums,n,ind-2,dp);
        int notTake=solve(nums,n,ind-1,dp);
        return dp[ind]=max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int ans=solve(nums,n,n-1,dp);
        return ans;
    }
};