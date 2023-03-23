    void levelOrder(Node * root) {

        if(!root) return ;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<q.size();i++)
            {
                Node *node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                cout<<node->data<<" ";
            }
        }
        
    }
