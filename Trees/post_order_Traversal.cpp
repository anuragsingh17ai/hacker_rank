class Solution {
public:
    vector<int>v;
    void dfs(TreeNode* root)
    {
        if(!root) return;
        dfs(root->left);
        dfs(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
      dfs(root);
      return v;  
    }
};
