/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, int targetSum,long long int currSum){
        if(root==NULL)return 0;
        int ans=0;
        currSum+=root->val;
        if(targetSum==currSum)ans++;
        ans+=solve(root->left,targetSum,currSum);
        ans+=solve(root->right,targetSum,currSum);
        return ans;
        // if(root->left==NULL && root->right== NULL && (targetSum==currSum)){
        //     res.push_back(help);
        // }
        // solve(root->left,targetSum,help,res,currSum);
        // solve(root->right,targetSum,help,res,currSum);
        // help.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        // vector<int>help;
        // vector<vector<int>>res;
        if(root==NULL)return 0;
        int res=solve(root,targetSum,0);
        res+=pathSum(root->left,targetSum);
        res+=pathSum(root->right,targetSum);
        return res;
        
    }
};