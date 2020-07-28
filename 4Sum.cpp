class Solution{
public:
	vector<vector<int>> fourSum(vector<int> &A, int B){
		sort(A.begin(), A.end());
		return kSum(A, B, 0, 4);
	}
private:
	vector<vector<int>> kSum(vector<int>&A, int target, int start, int k){
		vector<vector<int>> res;
		if(start == A.size() || A[start]*k>target || target > A.back()*k)
			return res;
		if(k==2)
			return twoSum(A, target, start);
		for(int i=start; i<A.size(); i++){
			if(i==start || a[i-1]!=A[i]){
				for(auto &set: kSum(A, target-A[i], i+1, k-1)){
					res.push_back(A[i]);
					res.back().insert(end(res.back()), begin(set), end(set));
				}
			}
		}
		return res;
	}
	vector<vector<int>> twoSum(vector<int> &A, int target, int sum){
		vector<vector<int>> res;
		unordered_set<int> s;
		for(auto i=start;i<A.size();i++){
			if(res.empty() || res.back()[1] !=A[i]){
				if(s.count(target-A[i]))
					res.push_back({target-A[i], A[i]});
			}
			s.insert(A[i]);
		}
		return res;
	}
};
