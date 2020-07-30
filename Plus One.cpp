class Solution{
public:
	vector<int> plusOne(vector<int> &digits){
		vector<int> res;
		int c=1;
		for(int i=digits.size()-1;i>=0;i--){
			int sum = c + digits[i];
			c=sum/10;
			res.push_back(sum%10);
		}
		if(c)
			res.push_back(c);
		reverse(res.begin(), res.end());
		
		return res;
	}
};
