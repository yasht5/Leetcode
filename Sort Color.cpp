class Solution{
public:
	void sortColors(vector<int> &A){
		int l=0;
		int mid=0;
		int h=A.size()-1;
		while(mid<=h){
			switch(A[mid]){
				case 0:
					swap(A[l++], A[mid++]);
					break;
				
				case 1:
					mid++;
					break;
				
				case 2:
					swap(A[mid], A[h--]);
					break;
			}
		}
	}
};
