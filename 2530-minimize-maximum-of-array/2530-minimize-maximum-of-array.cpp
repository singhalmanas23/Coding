class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long res = nums[0]; 
        long long total = nums[0]; 
        
        for (int i = 1; i < nums.size(); i++) {
            total += nums[i]; 
            long long curr = ceil((double)total / (i + 1));
            res = max(res, curr);
        }
        
        return res;
    }
};
