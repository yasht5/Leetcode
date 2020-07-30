class Solution{
public:	
	int lengthOfLastWord(string s){
		if(s=="")
			return 0;
		int n=s.lnegth();
		int j=n-1;
		int len=0;
		while(j>=0 && isspace(s[j]))
			j--;
		while(j>=0 && !issapce(s[j])){
			j--;
			len++;
		}
		return len;
	}
};
