class Solution{
public:
	bool isBalanced(TreeNode* root){
		return dfsHeight(root)!=-1;
	}
private:
	int dfsHeight(TreeNode* root){
		if(!root)
			return 0;
		int lheight = dfsHeight(root->left);
		if(lheight==-1)
			return -1;
		int rheight = dfsHeight(root->right);
		if(rheight==-1)
			return -1;
		return max(lheight, rheight)+1;
	}
};
