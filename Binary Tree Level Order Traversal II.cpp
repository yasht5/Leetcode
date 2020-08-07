class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d = depth(root);
        vector<vector<int>> ans(d,vector<int> {});
        levelOrder(ans,root,d-1);
        return ans;
    }
private:
    int depth(TreeNode *root) {
        if (!root) return 0;
        return max(depth(root->left),depth(root->right))+1;
    }

    void levelOrder(vector<vector<int>> &ans, TreeNode *node, int level) {
        if (!node) return;
        ans[level].push_back(node->val);
        levelOrder(ans,node->left,level-1);
        levelOrder(ans,node->right,level-1);
    }

};
