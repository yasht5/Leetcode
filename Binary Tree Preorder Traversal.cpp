class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* r = st.top();
            st.pop();
            res.push_back(r->val);
            if(r->right)
                st.push(r->right);
            if(r->left)
                st.push(r->left);
        }
        return res;
    }
};
