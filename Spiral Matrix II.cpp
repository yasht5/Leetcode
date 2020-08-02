class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int j=1;
        vector<vector<int>> res(n, vector<int>(n, 0));
        int l=0, t=0, r=n-1, b=n-1;
        int d=0;
        while(l<=r && t<=b && j<=n*n){
            if(d==0){
                for(int i=l;i<=r;i++){
                    res[t][i]=j++;
                }
                t++;
                d=1;
                
            }
            else if(d==1){
                for(int i=t;i<=b;i++){
                    res[i][r]=j++;
                }
                d=2;
                r--;
            }
            else if(d==2){
                for(int i=r;i>=l;i--){
                    res[b][i]=j++;
                }
                d=3;
                b--;
            }
            else{
                for(int i=b;i>=t;i--){
                    res[i][l]=j++;
                }
                d=0;
                l++;
            }
        }
        return res;
    }
};
