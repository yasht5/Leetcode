class Solution{
public:
	int mySqrt(int x){
		if(x==0)
			return 0;
		int left = 1;
		int right = INT_MAX;
		int mid;
		while(1){
			mid = left + (right-left)/2;
			if(mid > x/mid){
				right = mid-1;
			}
			else{
				if(mid+1 > x/(mid+1))
					return mid;
				left = mid+1;
			}
		}
		return mid;
	}
};
