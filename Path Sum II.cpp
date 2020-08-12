class Solution{
public:
	vector<vector<int>> pathSum(TreeNode* root, int sum){
		vector<vector<int>> res;
		if(!root)
			return res;
		vector<int> temp;
		temp.push_back(root->val);
		helper(res, temp, root, sum - root->val);
		return res;
	}

private:
	void helper(vector<vector<int>> &res, vector<int> &temp, TreeNode* root, int sum){
		if(sum==0 && !root->left && !root->right)
			res.push_back(temp);
		if(root->left){
			temp.push_back(root->left->val);
			helper(res, temp, root->left, sum - root->left->val);
			temp.pop_back();
		}
		if(root->right){
			temp.push_back(root->right->val);
			helper(res, temp, root->right, sum - root->right->val);
			temp.pop_back();
		}
	}
};
