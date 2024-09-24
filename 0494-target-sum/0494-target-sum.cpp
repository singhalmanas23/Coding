class Solution {
public:
    int count=0;
    void solve(vector<int>& nums, int target,int i,int current){
        if(i==nums.size()){
            if(current==target){
                count++;
            }
            return;
        }
        solve(nums,target,i+1,current+nums[i]);
        solve(nums,target,i+1,current-nums[i]);
        

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        count=0;
        solve(nums,target,0,0);
        return count;
    }
};