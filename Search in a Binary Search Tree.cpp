class Solution{
public:
	TreeNode* searchBST(TreeNode* root, int val){
		if(root==NULL)
			return NULL;
		while(root!=NULL){
			if(root->val == val)
				return root;
			if(root->val < val)
				root = root->right;
			else
				root = root->left;
		}
		return root;
	}
};
