    int height(Node* root) {
        // Write your code here.
        
        if(!root) return -1;
        
       int lh=height(root->left)+1;
       int rh=height(root->right)+1;
       
      return max(lh,rh);
      
    }
