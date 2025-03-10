class Solution {
public:
    int jump(vector<int>& A) {
        int n = A.size();
        if(n==0) return 0;
        vector<int> minJumps(n,-1);
        minJumps[0]=0;
        int i=0,j=1; 
        for(;i<n;i++){
            if(minJumps[i]==-1) return -1;
            while(j<n&&j-i<=A[i]){
                minJumps[j]=minJumps[i]+1;
                j++;
            }
        }
        return minJumps[n-1];
    }
};
