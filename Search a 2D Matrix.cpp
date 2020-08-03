class Solution{
public:
	bool searchMatrix(vector<vector<int>> &A, int target){
		if(A.size()==0)
			return false;
		int n=A.size();
		int m=A[0].size();
		int l=0;
		int h=m*n-1;
		while(l<=h){
			int mid = (l+h)/2;
			int midX = mid/m;
			int midY = mid%m;
			if(A[midX][midY]==target)
				return true;
			if(A[midX][midY]<target)
				l=mid+1;
			else
				h=mid-1;
		}
		return false;
	}
};
