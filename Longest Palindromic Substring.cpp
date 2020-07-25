class Solution{
public:
  string longestPalindrome(string s){
    if(s=="")
      return "";
    int start=0;
    int maxLen=1;
    int n=s.lenght();
    int low=0, high;
    for(int i=0;i<n;i++){
      low=i-1;
      high=i
      while(low>=0 && high<n && s[low]==s[high]){
        if(high-low+1>maxLen){
          maxLen=high-low+1;
          start=low;
        }
        low--;
        high++;
      }
      low=i-1;
      high=i+1;
      while(low>=0 && high<n && s[low]==s[high]){
        if(high-low+1>maxLen){
          maxLen=high-low+1;
          start=low;
        }
        low--;
        high++;
      }
    }
    string sol="";
    high = start+maxLen;
    while(start!=high){
      sol+=s[start];
      start++;
    }
    return sol;
  }
};
