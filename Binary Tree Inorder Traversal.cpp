class Solution{
public:
	vector<int> inorderTraversal(TreeNode* root){
		vector<int> res;
		if(root==NULL)
			return res;
		stack<TreeNode*> st;
		TreeNode* curr =root;
		while(curr!=NULL || !st.empty()){
			while(curr!=NULL){
				st.push(curr);
				curr=curr->left;
			}
			curr=st.top();
			st.pop();
			res.push_back(curr->val);
			curr=curr->right;
		}
		return res;
	}
};
	
