Class Solution{
 public:
  int lengthOfLongestSubstring(string s){
    int n=s.length();
    vector<int> vis(256, -1);
    int i=0;
    int res=0;
    for(int j=0;j<n;j++){
      i = max(i, vis[s[j]]+1);
      res = max(res, j-i+1);
      vis[s[j]]=j;
    }
    return res;
  }
};
