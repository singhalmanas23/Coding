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
    void solve(TreeNode* root, int targetSum,vector<vector<int>>&res,int currSum,vector<int>help){
        if(root==NULL)return;
        help.push_back(root->val);
        currSum+=root->val;
        if(root->left==NULL && root->right==NULL && (targetSum==currSum)){
            res.push_back(help);

        }
        solve(root->left,targetSum,res,currSum,help);
        solve(root->right,targetSum,res,currSum,help);
        help.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int currSum=0;
        vector<int>help;
        vector<vector<int>>res;
        solve(root,targetSum,res,currSum,help);
        return res;
    }
};