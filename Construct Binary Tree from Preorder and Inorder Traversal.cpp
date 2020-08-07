class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        return buildTree(preorder, inorder, 0, n-1);
    }
private:
    int preidx=0;
    TreeNode* buildTree(vector<int>&pre, vector<int>&in, int start, int end){
        if(start>end)
            return NULL;
        TreeNode* t = new TreeNode(pre[preidx++]);
        if(start==end)
            return t;
        int inidx = search(in, start, end, t->val);
        
        t->left = buildTree(pre, in, start, inidx-1);
        t->right = buildTree(pre, in , inidx+1, end);
        return t;
    }
    
    int search(vector<int> &in, int start, int end, int key){
        int i;
        for(i=start;i<=end;i++){
            if(in[i]==key)
                break;
        }
        return i;
    }
};
