class Solution{
public:
	string addBinary(string a, string b){
		if(a.length()==0)
			return b;
		if(b.length()==0)
			return a;
		string s="";	
		int c=0, i=a.length()-1, j=b.length()-1;
		while(i>=0 || j>=0 || c==1){
			c+= i>=0 ? a[i--]-'0' : 0;
			c+= j>=0 ? b[j--]-'0' : 0;
			s = char(c%2 +'0') + s;
			c=c/2;
		}
		return s;
	}
};
