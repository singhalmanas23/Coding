class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
        int left=0;
        int right=n-1;
        long long answer=0;
        int target=skill[left]+skill[right];
        while(left<right){
            int sum=skill[left]+skill[right];
            if(target!=sum){
                return -1;
            }
            
            answer += skill[left] * skill[right];
            left++;
            right--;
        }
        return answer;

        
    }
};