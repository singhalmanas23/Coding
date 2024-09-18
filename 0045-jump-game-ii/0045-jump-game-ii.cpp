class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0,maxi=0,n=nums.size(),count=0;
        while(r<n-1){
            maxi=0;
            for(int i=l;i<=r;i++){
                maxi=max(maxi,i+nums[i]);
            }
            count++;
            l=r+1;
            r=maxi;
            
        }
        return count;
        
    }
};