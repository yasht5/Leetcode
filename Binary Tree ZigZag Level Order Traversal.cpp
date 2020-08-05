class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        stack<TreeNode*> curr;
        stack<TreeNode*> next;
        bool lr=true;
        curr.push(root);
        while(!curr.empty() || !next.empty()){
            
            vector<int> v;

            while(!curr.empty()){
                TreeNode *temp = curr.top();
                v.push_back(temp->val);
                curr.pop();
                if(temp->left)
                    next.push(temp->left);
                if(temp->right)
                    next.push(temp->right);
            }    
            res.push_back(v);
            v.clear();
            while(!next.empty()){
                TreeNode *temp=next.top();
                next.pop();
                v.push_back(temp->val);
                if(temp->right)
                    curr.push(temp->right);
                if(temp->left)
                    curr.push(temp->left);
            }
            if(!v.empty())
            res.push_back(v);
        }
        return res;
    }
};
