// Last updated: 6/12/2026, 11:36:38 AM
1class Solution {
2public:
3    bool isNumber(string s) {
4        bool digit = false;
5        bool dot = false;
6        bool exp = false;
7        bool digitAfterExp = true;
8
9        for (int i = 0; i < s.size(); i++) {
10            char c = s[i];
11
12            if (isdigit(c)) {
13                digit = true;
14                if (exp) digitAfterExp = true;
15            }
16            else if (c == '+' || c == '-') {
17                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E')
18                    return false;
19            }
20            else if (c == '.') {
21                if (dot || exp)
22                    return false;
23                dot = true;
24            }
25            else if (c == 'e' || c == 'E') {
26                if (exp || !digit)
27                    return false;
28
29                exp = true;
30                digitAfterExp = false;
31            }
32            else {
33                return false;
34            }
35        }
36
37        return digit && digitAfterExp;
38    }
39};