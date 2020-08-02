class Solution {
public:
    bool canJump(vector<int>& A) {
        int n=A.size();
        if(n==0 || n==1) return 1;
        vector<int> v(n,0);
        v[n-1]=0;
        int clo=n-1;
        for(int i=n-2;i>=0;i--){
            if(i+A[i]>=clo){
                v[i]=1;
                clo=i;
                
            }
            
        }
        return v[0];
    }
};
