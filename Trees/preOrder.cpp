class Solution {
public:
    vector<int> v;
    void dfs(TreeNode* root)
    {
        if(!root) return;
        v.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return v;
        
    }
};
