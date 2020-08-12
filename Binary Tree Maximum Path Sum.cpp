class Solution{
public:
	int maxPathSum(TreeNode* A){
		int res = INT_MIN;
		func(A, res);
		return res;
	}
private:
	int func(TreeNode* A, int& res){
		if(!A)
			return 0;
		int l = func(A->left, res);
		int r = func(A->right, res);
		int ms = max(max(l, r)+A->val, A->val);
		int mtop = max(ms, l+r+A->val);
		res = max(res, mtop);
		return ms;
	}
};
