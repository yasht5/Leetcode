class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& A, int target) {
        sort(A.begin(), A.end());
        vector<vector<int>> res;
        vector<int> sub;
        subset(res, A, sub, target, 0);
        return res;
    }
private:
    void subset(vector<vector<int>> &res, vector<int> &A, vector<int> &sub, int t, int idx){
        if(t==0){
            res.push_back(sub);
            return;
        }   
        for(int i=idx;i<A.size();i++){
            if(i!=idx && A[i-1]==A[i])
                continue;
            if(A[i]>t)
                break;
            sub.push_back(A[i]);
            subset(res, A, sub, t-A[i], i+1);
            sub.pop_back();
        }
        return;
    }
};
