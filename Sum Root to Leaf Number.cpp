class Solution{
public:
	int sumNUmbers(TreeNode* root){
		if(!root)
			return 0;
		return helper(root, 0);
	}
	
private:
	int helper(TreeNode* root, int x){
		if(!root->left && !root->right)
			return 10*x + root->val;
		int val=0;
		if(root->left)
			val+=helper(root->left, 10*x + root->val);
		if(root->right)
			val+=helper(root->right, 10*x + root->Val);
		return val;
	}
};
