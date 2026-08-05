class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stac.push(c);
            } else {
                if (stac.empty())
                    return false;

                if ((stac.top() == '(' && c == ')') ||
                    (stac.top() == '[' && c == ']') ||
                    (stac.top() == '{' && c == '}')) {
                    stac.pop();
                } else {
                    return false;
                }
            }
        }

        return stac.empty();
    }
};