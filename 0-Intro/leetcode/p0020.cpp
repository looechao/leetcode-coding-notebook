class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char ch : s) {
            switch (ch) {
                case '(':
                case '[':
                case '{':
                    stk.push(ch);
                    break;
                case ')':
                    if (stk.empty() || stk.top() != '(') {
                        return false;
                    }
                    stk.pop();
                    break;
                case ']':
                    if (stk.empty() || stk.top() != '[') {
                        return false;
                    }
                    stk.pop();
                    break;
                case '}':
                    if (stk.empty() || stk.top() != '{') {
                        return false;
                    }
                    stk.pop();
                    break;
            }
        }
        return stk.empty();
    }
};