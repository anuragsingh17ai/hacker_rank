class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>vv;
        if(!root) return vv;

        queue<TreeNode*>q;
        q.push(root);
        

        while(!q.empty())
        {
            int s=q.size();
            vector<int>v;

            for(int i=0;i<s;i++)
            {
                TreeNode* node=q.front();
                v.push_back(node->val);
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            vv.push_back(v);
        }
        return vv;
    }
};
