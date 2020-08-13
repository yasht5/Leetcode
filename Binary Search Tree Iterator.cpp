class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        inor.clear();
        inorder(root);
        idx=0;
    }
    
    /** @return the next smallest number */
    int next() {
        idx++;
        return inor[idx-1];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !(idx==inor.size());
    }
    
private:
    vector<int> inor;
    int idx;
    void inorder(TreeNode* root){
        if(!root)
            return;    
        inorder(root->left);
        inor.push_back(root->val);
        inorder(root->right);
    }
};
