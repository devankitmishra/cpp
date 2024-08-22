class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(0, 0, "", n, ans);
        return ans;
    }
private:
    void backtrack(int open, int close, string s, int n, vector<string>& ans) {
        if(open == close && open+close == n*2){
            ans.push_back(s);
            return;
        }
        if(open < n){
            backtrack(open+1, close, s+"(", n, ans);
        }
        if(close < open){
            backtrack(open, close+1, s+")", n, ans);
        }
    }
};