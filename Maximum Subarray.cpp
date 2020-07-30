class Solution{
public:
	int maxSubArray(vector<int> &nums){
		int curr =nums[0];
		int maxsofar = nums[0];
		
		for(int i=1;i<nums.size();i++){
			curr = max(nums[i], curr+nums[i]);
			maxsofar = max(curr, maxsofar);
		}
		return maxsofar;
	}
};

/*
	Divide and Conquer
class Solution{
public{
	int maxSubArray(vector<int> &nums){
		int n=nums.size();
		return maxSub(nums, 0, n-1);
	}

private:
	int maxSub(vector<int> &nums, int l, int h){
		if(l==h)
			return nums[l];
		int m = (l+h)/2;
		return max(max(maxSub(nums, l, m), maxSub(nums, m+1, h)), maxCross(nums, l, m, j);
	}
	
	int maxCorss(vector<int> &nums, int l, int m, int h){
		int sum=0;
		int left_sum=INT_MIN;
		for(int i=m;i>=1;i--){
			sum+=nums[i];
			if(sum>left_sum)
				left_sum=sum;
		}
		sum=0;
		int right_sum=INT_MIN;
		for(int i=m+1;i<=h;i++){
			sum+=nums[i];
			if(sum>right_sum)
				right_sum=sum;
		}
		return max(left_sum+right_sum, max(left_sum ,roght_sum));
	}
};
*/
