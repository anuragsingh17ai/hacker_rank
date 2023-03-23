class Solution {
public:
    vector<int>v;
    void dfs(TreeNode *root)
    {
        if(!root) return;

        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return v;
    }
};
