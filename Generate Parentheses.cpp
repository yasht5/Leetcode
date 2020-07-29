class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        generate(n, n, s, res);
        return res;
    }
private:
    void generate(int o, int c, string s, vector<string> &res){
        if(o==0 && c==0){
            res.push_back(s);
            return;
        }
        if(o>c){
            return;
        }
        if(o>0){
            generate(o-1, c, s+"(", res);
        }
        if(c>0){
            generate(o, c-1, s+")", res);
        }
        return;
    }
};
