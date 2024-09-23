class Solution {
    int f(int index, int n, string s, unordered_set<string>& set, vector<int>& dp) {
        if(index == n)  return 0;

        if(dp[index] != -1) return dp[index];

        int skip = 1 + f(index+1, n, s, set, dp);

        int take = 1e8;

        for(int i=index; i<n; i++) {
            string substr = s.substr(index, i-index+1);
            if(set.count(substr))    take = min(take, f(i+1, n, s, set, dp));
        }

        return dp[index] = min(take, skip);

    }
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();

        unordered_set<string> set;

        vector<int> dp(n+1,-1);

        for(auto it : dictionary)   set.insert(it);

        return f(0, n, s, set, dp);
    }
};