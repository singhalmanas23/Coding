class Solution {
public:
    long long int solve(vector<vector<int>>& questions,int ind,vector<long long>&dp){
        if(ind>=questions.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        long long int take=questions[ind][0]+solve(questions, ind + questions[ind][1] + 1,dp);
        long long int notTake=solve(questions,ind+1,dp);
        return dp[ind]=max(take,notTake);

    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n+1,-1);
        return solve(questions,0,dp);
        
    }
};