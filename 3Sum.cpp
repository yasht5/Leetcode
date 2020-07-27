class Solution{
public:
	vector<vector<int>> threeSum(vector<int> &A){
		vector<vector<int>> res;
		if(A.size()<3)
			return res;
		int i=0, j=0, k=0;
		int n=A.size();
		map<vector<int>, bool> mp;
		sort(A.begin(), A.end());
		for(int i=0;i<n-2;i++){
			j=i+1;
			k=n-1;
			while(j<k){
				long long sum = 0LL + A[i] + A[j] + A[k];
				if(sum<0)
					j++;
				else if(sum>0)
					k--;
				else{
					vector<int> temp = {A[i], A{j], A[k]};
					if(mp.find(temp)==mp.end()){
						mp[temp]=truel
						res.push_back(temp);
					}
					j++;
					k--;
				}
			}
		}
		return res;
	}
};
					
		
