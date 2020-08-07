class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int p=n-1;
        return buildTree(postorder, inorder, 0, n-1, p);
    }
private:
    
    TreeNode* buildTree(vector<int> &post, vector<int> &in, int start, int end, int &pidx){
        if(start>end)
            return NULL;
        TreeNode* t = new TreeNode(post[pidx--]);
        if(start==end)
            return t;
        int inidx = search(in, start, end, t->val);
        
        t->right = buildTree(post, in, inidx+1, end, pidx);
        t->left = buildTree(post, in, start, inidx-1, pidx);
        
        return t;
    }
    
    int search(vector<int>&in, int start, int end, int key){
        int i;
        for(i=start; i<=end;i++){
            if(in[i]==key)
                break;
        }
        return i;
    }
};
