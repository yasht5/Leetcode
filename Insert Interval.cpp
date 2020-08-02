class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& A, vector<int>& B) {
        A.push_back(B);
        vector<vector<int>> res;
        if(A.size()==0)
            return res;
        sort(A.begin(), A.end());
        res.push_back(A[0]);
        for(int i=1;i<A.size();i++){
            if(A[i][0]<=res[res.size()-1][1])
                res[res.size()-1][1] = max(res[res.size()-1][1], A[i][1]);
            else
                res.push_back(A[i]);
        }
        return res;
    }
};
