// Last updated: 6/4/2026, 11:04:11 AM
1class Solution {
2public:
3
4    string answer(string& s, int& i) {
5
6        string result = "";
7
8        while (i < s.size() && s[i] != ']') {
9
10            if (isalpha(s[i])) {
11
12                result += s[i];
13                i++;
14            }
15
16            else if (isdigit(s[i])) {
17
18                int num = 0;
19
20                while (i < s.size() && isdigit(s[i])) {
21                    num = num * 10 + (s[i] - '0');
22                    i++;
23                }
24
25                i++; // skip '['
26
27                string temp = answer(s, i);
28
29                i++; // skip ']'
30
31                while (num--) {
32                    result += temp;
33                }
34            }
35        }
36
37        return result;
38    }
39
40    string decodeString(string s) {
41
42        int i = 0;
43        return answer(s, i);
44    }
45};