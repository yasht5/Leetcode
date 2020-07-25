class Solution{
public:
  string convert(string s, int numRows){
    vector<string> v(numRows);
    if(numRows==1)
      return s;
    bool d;
    int row=0;
    for(int i=0;i<s.length();i++){
      v[row].push_back(s[i]);
      if(row==numRows-1)
        d=false;
      else
        d=true;
      if(d)
        row++;
      else
        row--;
    }
    string res;
    for(int i=0;i<numRows;i++){
      res+=v[i];
    }
    return res;
  }
};
