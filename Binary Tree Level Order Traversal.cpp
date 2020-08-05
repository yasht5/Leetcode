
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;
        while(!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if(t==NULL){
                res.push_back(temp);
                temp.resize(0);
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                temp.push_back(t->val);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
        }
        return res;
    }
};
