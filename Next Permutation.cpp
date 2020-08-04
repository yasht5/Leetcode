class Solution{
public:
	void nextPermutation(vector<int> &A){
		int k = A.size()-2;
		while(k>=0 && A[k+1]<=A[k])
			k--;
		if(k>=0){
			int j=A.size()-1;
			while(j>=0 && A[j]<=A[k])
				j--;
			swap(A[k], A[j]);
		}
		reverse(A, k+1);
	}
private:
	void reverse(vector<int> &A, int i){
		int n=A.size()-1;
		while(i<n && n>0){
			swap(A[i], A[n]);
			i++;
			n--;
		}
	}
};

