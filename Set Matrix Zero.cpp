class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
        vector<bool> row(A.size(), false);
        vector<bool> col(A[0].size(), false);
        
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[0].size();j++){
                if(A[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[0].size();j++){
                if(row[i] || col[j])
                    A[i][j]=0;
            }
        }
    }
};
