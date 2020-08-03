class Solution{
public:
	int removeDuplicates(vector<int>&A){
		int j=0;
		map<int, int> mp;
		for(int i=0;i<A.size();i++){
			if(mp.find(A[i])==mp.end() || mp[A[i]]<2){
				A[j++]=A[i];
				mp[A[i]]++;
			}
		}
		return j;
	}
};
