class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        vector<int> res;
        if(A.size()==0)
            return res;
        int t=0, l=0, r=A[0].size()-1, b=A.size()-1;
        int d=0;
        
        while(t<=b && l<=r){
            if(d==0){
                for(int i=l;i<=r;i++){
                    res.push_back(A[t][i]);
                }
                d=1;
                t++;
            }
            else if(d==1){
                for(int i=t;i<=b;i++){
                    res.push_back(A[i][r]);
                }
                r--;
                d=2;
            }
            else if(d==2){
                for(int i=r;i>=l;i--){
                    res.push_back(A[b][i]);
                }
                b--;
                d=3;
            }
            else{
                for(int i=b;i>=t;i--){
                    res.push_back(A[i][l]);
                }
                l++;
                d=0;
            }
        }
        return res;
    }
};
