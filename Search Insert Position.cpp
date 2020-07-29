class Solution{
public:
	int searchInsert(vector<int>& nums, int target){
		int n=nums.size();
		if(n==0)
			return 0;
		if(target<nums[0])
			return 0;
		if(target>nums[n-1])
			return n;
		for(int i=0;i<n;i++){
			if(nums[i]>=target)
				return i;			
		}
		return n;
	}
};
