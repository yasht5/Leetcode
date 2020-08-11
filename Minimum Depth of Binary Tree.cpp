class Solution{
public:
	int minDepth(TreeNode* root) {
    	if (root == NULL) return 0;
    	queue<TreeNode*> q;
    	q.push(root);
    	int h = 0;
    	while (!q.empty()) {
        	h++;
       	 	int k = q.size();
        	for (int j=0; j<k; j++) {
            	TreeNode* rt = q.front();
            	if (rt->left) 
					q.push(rt->left);
            	if (rt->right) 
					q.push(rt->right);
            	q.pop();
            	if (rt->left==NULL && rt->right==NULL) 
					return h;
        	}
    	}
    	return -1; 
	}
};
