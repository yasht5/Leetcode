class Solution{
public:
	void merger(vector<int> &nums1, int m, vector<int> &nums2, int n){
		int i = m-1;
		int j = n-1;
		int t= n+m-1;
		while(j>=0){
			nums1[t--] = i>=0 && nums1[i]>nums2[j] ? nums1[i--] : nums2[j--];
		}
		
	}
};
