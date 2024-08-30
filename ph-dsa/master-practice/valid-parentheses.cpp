#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }

                char top = st.top();

                if ((top == '(' && c == ')') || (top == '{' && c == '}') ||
                    (top == '[' && c == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution sol = Solution();

    const string NO = "\033[1;31mNO\033[0m";
    const string YES = "\033[1;32mYES\033[0m";

    cout << (sol.isValid("()") ? YES : NO) << endl;
    cout << (sol.isValid("()[]{}") ? YES : NO) << endl;
    cout << (sol.isValid("(})") ? YES : NO) << endl;
    cout << (sol.isValid("([{([])}])") ? YES : NO) << endl;

    return 0;
}