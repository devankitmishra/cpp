class Solution {
public:
    bool isValid(string s) {
        ios::sync_with_stdio(false);
        stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if (c == ')') {
                if (stack.empty() || stack.top() != '(') {
                    return false;
                } else {
                    stack.pop();
                }
            } else if (c == '}') {
                if (stack.empty() || stack.top() != '{') {
                    return false;
                } else {
                    stack.pop();
                }
            } else if (c == ']') {
                if (stack.empty() || stack.top() != '[') {
                    return false;
                } else {
                    stack.pop();
                }
            }
        }
        return stack.empty();
    }
};
