class Solution{
public:
	bool exist(vector<vector<char>>&A, string word){
		int n=A.size();
		int m=A[0].size();
		vector<vector<int>> dp(n, vector<int>(m, 0));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(helper(A, word, 0, i, j, n, m, dp);
					return true;
			}
		}
		return false;
	}

private:
	bool helper(vector<vector<int>>&A, string &s, int z, int i, int j, int n, int m, vector<vector<int>> &dp){
		if(z==s.length())
			return true;
		if(A[i][j]=s[z]){
			dp[i][j]=1;
			if(i+1<n && dp[i+1][j]==0){
				if(helper(A, word, z+1, i+1, ij, n, m, dp)){
					return true;
				}
			}
			if(j+1<m && dp[i][j+1]==0){
				if(helper(A, s, z+1, i, j+1, n, m, dp)){
					return true;
				}
			}
			if(i-1>=0 && dp[i-1][j]==0){
				if(helper(A, s, z+1, i-1, j, n, m, dp)){
					return true;
				}
			}
			if(j-1>=0 && dp[i][j-1]==0){
				if(helper(A, s, z+1, i, j-1, n, m, dp)){
					return true;
				}
			}
			dp[i][j]=0;
			if(z+1==s.length())
				return true;
		}
		return false;
	}
};
				
