// Last updated: 6/17/2026, 10:58:25 AM
1class Solution {
2public:
3    string processStr(string s) {
4
5        string ans = "";
6
7        for (char c : s) {
8
9            if (c >= 'a' && c <= 'z') {
10                ans.push_back(c);
11            }
12
13            else if (c == '*') {
14                if (!ans.empty()) {
15                    ans.pop_back();
16                }
17            }
18
19            else if (c == '#') {
20                ans += ans;
21            }
22
23            else if (c == '%') {
24                reverse(ans.begin(), ans.end());
25            }
26        }
27
28        return ans;
29    }
30};