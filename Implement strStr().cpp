class Solution{
public:
	int strStr(string A, string B){
		int hs=A.size();
		int nz=B.size();
		int start=0, tempstart=0;
		int j;
		while(tempstart<hs && j<nz){
			if(A[tempstart]==B[j]){
				j++;
				tempstart++;
			}
			else{
				j=0;
				tempstart=++start;
			}
			if(j==nz)
				return start;
		}
		return -1;
	}
};
