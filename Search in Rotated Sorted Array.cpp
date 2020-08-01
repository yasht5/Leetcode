class Solution{
public:
	int search(vector<int>&A, int target){
		int n=A.size()-1;
		return bsearch(A, 0, n, target);
	}
private:
	int bsearch(vector<int>&A, int low, int high, int key){
		if(low>high)
			return -1;
		int mid = (low+high)/2;
		if(A[mid]==key)
			return mid;
		if(A[low]<=A[mid]){
			if(key>=A[low] && key<=A[mid])
				return bsearch(A, low, mid-1, key);
			return bsearch(A, mid+1, high, key);
		}
		if(key>=A[mid] && key<=A[high])
			return bsearch(A, mid+1, high, key);
		return bsearch(A, low, mid-1, key);
	}
};
