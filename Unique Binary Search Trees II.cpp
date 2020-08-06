class Solution{
public:
	vector<TreeNode*> generateTrees(int n){
		vector<TreeNode*> res;
		if(n==0)
			return res;
		res = helper(1, n);
		return res;
	}
private:
	vector<TreeNode*> helper(int start, int end){
		vector<TreeNode*> tree;
		if(start>end){
			tree.push_back(NULL);
			return tree;
		}
		for(int i=start;i<=end;i++){
			vector<TreeNode*> left = helper(start, i-1);
			vector<TreeNode*> right = helper(i+1, end);
			for(auto l : left){
				for(auto r: right){
					TreeNode* curr = new TreeNode(i);
					curr->left = l;
					curr->right = r;
					tree.push_back(curr);
				}
			}
		}
		return tree;
	}
};
