class Solution {
public:
    int maximumSwap(int num) {
        string nums=to_string(num);
        int n=nums.length();
        vector<int>last(10,-1);
        for(int i=0;i<n;i++){
            last[nums[i]-'0']=i;
        }
        for(int i=0;i<n;i++){
            for(int j=9;j>nums[i]-'0';j--){
                if(last[j]>i){
                    swap(nums[i],nums[last[j]]);
                    return stoi(nums);
                }
            }
        }
        return num;
    }
};