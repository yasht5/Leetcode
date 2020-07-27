class Solution{
public:
	vector<string> letterCombinations(string digits){
		vector<string> res;
		if(digits.length()==0)
			return res;
		string curr="";
		helper(res, digits, curr, 0);
		return res;
	}
private:
	
	string charmap[10] = {"0", "1", "abc", "def", ,"ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	void helper(vector<string> &res, string &s, string &temp, int idx){
		if(idx==s.size()){
			res.push_back(temp);
			return;
		}
		int x = s[idx]-'0';
		for(int i=0;i<charmap[x].length();i++){
			temp.push_back(charmap[x][i]);
			helper(res, s, temp, idx+1);
			temp.pop_back();
		}
		return ;
	}
};
