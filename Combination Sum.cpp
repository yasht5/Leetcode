class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> sub;
        vector<int> v = unique(candidates);
        subset(res, v, sub, target, 0);
        return res;
        
    }

private:
    vector<int> unique(vector<int> &A){
        vector<int> res;
        res.push_back(A[0]);
        for(int i=1;i<A.size();i++){
            if(A[i-1]!=A[i])
                res.push_back(A[i]);
        }
        return res;
    }
    
    void subset(vector<vector<int>>&res, vector<int>&A, vector<int>&sub, int t, int idx){
        if(t<0)
            return;
        if(t==0){
            res.push_back(sub);
            return;
        }
        while(idx<A.size() && t-A[idx]>=0){
            sub.push_back(A[idx]);
            subset(res, A, sub, t-A[idx], idx);
            idx++;
            sub.pop_back();
        }
        return ;
    }
};
