class Solution{
public:
	string intToRoman(int num){
		string ans="";
		int digit = log10(num) + 1;
		
		map<int, char> mp = {{1, 'I'}, {5, 'V'}, {10, 'X'}, {50, 'L'}, {100, 'C'}, {500, 'D'}, {1000, 'M'}};
		int i=0;
		while(i<digit){
			int idx = pow(10, digit-i-1);
			int first = num/idx;
			
			if(first==4){
				ans+=mp[idx];
				ans+=mp[idx*5];
			}
			else if(first==9){
				ans+=mp[idx];
				ans+=mp[idx*10];
			}
			else{
				if(first>4)
					ans+=mp[idx*5];
				for(int i=0;i<first%5;i++){
					ans+=mp[idx];
				}
			}
			num = num - (first*idx;
		}
		return ans;
	}
};
