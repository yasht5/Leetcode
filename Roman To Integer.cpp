class Solution{
public:
	int romanToInt(string s){
		int n=s.length();
		int ans=0;
		int last, sec_last;
		for(int i=n-1;i>=0;i--){
			last = val(s[i]);
			if(i!=0)
				sec_last = val(s[i-1]);
			ans+=last;
			if(sec_last<last){
				ans-=sec_last;
				i--;
			}
			last=0;
			sec_last=0;
		}
		return ans;
	}
private:
	int val(char c){
		if(c=='I') return 1;
		else if(c=='V') return 5;
		else if(c=='X') return 10;
		else if(c=='L') return 50;
		else if(c=='C') return 100;
		else if(c=='D') return 500;
		else
			return 1000;
	}
};
