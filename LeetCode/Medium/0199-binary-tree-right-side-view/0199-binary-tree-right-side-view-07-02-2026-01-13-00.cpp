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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        recursion(root, 0, res);
        return res;
    }
    void recursion(TreeNode* node, int level, vector<int>&ans){
        if(node==NULL) return;
        if(ans.size()==level)ans.push_back(node->val);
        recursion(node->right, level+1, ans);
        recursion(node->left, level+1, ans);
    }

};