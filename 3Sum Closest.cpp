class Solution{
public:
	int threeSumClosest(vector<int> &A, int target){
		if(A.size()<3)
			return 0;
		sort(A.begin(), A.end());
		int n=A.size();
		int i=0;
		int sum=0;
		int diff=INT_MAX;
		while(i<n-2){
			int l=i+1;
			int r=n-1;
			while(l<r){
				int temp=A[i]+A[l]+A[r];
				int d = abs(temp-target);
				if(d==0)
					return target;
				if(d<diff){
					diff=d;
					sum=temp;
				}
				if(temp<target)
					l++;c:
    int threeSumClosest(vector<int>& A, int target) {
        if(A.size()<3)
            return 0;
        sort(A.begin(), A.end());
        int n=A.size();
        int diff=INT_MAX;
        int i=0;
        int l=n-1;
        int sum=0;
        while(i<n-2){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int temp = A[i]+A[left]+A[right];
                int d = abs(temp - target);
                if(d==0)
                    return target;
                if(d<diff){
                    diff=d;
                    sum=temp;
                }
				else
					r--;
			}
			i++;
		}
		return sum;
	}
};
