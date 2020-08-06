class Solution{
public:
	vector<int> findDuplicates(vector<int>&A){
		vector<int> res;
		int n=A.size();
		if(n==0)
			return res;
		for(int i=0;i<n;i++){
			A[abs(A[i])-1] = -A[abs(A[i])-1];
			if( A[abs(A[i])-1] > 0)
				res.push_back(abs(A[i]);
		}
		return res;
	}
};
