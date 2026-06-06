// Last updated: 6/6/2026, 1:41:16 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for(char ch : s) {
7
8            if(ch == '(' || ch == '{' || ch == '[') {
9                st.push(ch);
10            }
11            else {
12
13                if(st.empty()) {
14                    return false;
15                }
16
17                if(ch == ')' && st.top() == '(') {
18                    st.pop();
19                }
20                else if(ch == '}' && st.top() == '{') {
21                    st.pop();
22                }
23                else if(ch == ']' && st.top() == '[') {
24                    st.pop();
25                }
26                else {
27                    return false;
28                }
29            }
30        }
31
32        return st.empty();
33    }
34};