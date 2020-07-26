class Solution{
public:
	int maxArea(vector<int> &A){
		int low=0;
		int high=A.size()-1;
		int area=0;
		while(low<high){
			area = max(area, min(A[low], A[high])*(high-low));
			if(A[low]<A[high])
				low++;
			else
				high--;
		}
		return area;
	}
};
