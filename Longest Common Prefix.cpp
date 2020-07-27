class Solution{
public:
	string longestCommonPrefix(vector<string>& strs){
		if(strs.size()==0)
			return "";
		int minL = minLength(strs);
		string res;
		char curr;
		for(int i=0;i<minL;i++){
			curr = strs[0][i];
			for(int j=1;j<strs.size();j++){
				if(strs[j][i] != curr)
					return res;
			}
			res.push_back(curr);
		}
		return res;
	}
private:
	int minLength(vector<string> &s){
		int minm = s[0].length();
		for(int i=1;i<s.size();i++){
			if(s[i].length() < minm){
				minm = s[i].length();
			}
		}
		return minm;
	}
};
