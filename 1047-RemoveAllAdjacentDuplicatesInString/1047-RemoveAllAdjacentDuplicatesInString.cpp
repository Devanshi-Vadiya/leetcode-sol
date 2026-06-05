// Last updated: 6/5/2026, 2:29:59 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5
6        for(char ch : s) {
7            if(!st.empty() && st.top() == ch) {
8                st.pop();
9            } else {
10                st.push(ch);
11            }
12        }
13
14        string ans = "";
15
16        while(!st.empty()) {
17            ans += st.top();
18            st.pop();
19        }
20
21        reverse(ans.begin(), ans.end());
22
23        return ans;
24    }
25};