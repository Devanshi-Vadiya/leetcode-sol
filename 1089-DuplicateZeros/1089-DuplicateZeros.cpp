// Last updated: 5/24/2026, 3:56:59 PM
1class Solution {
2public:
3    string digitSum(string s, int k) {
4
5        while(s.length() > k) {
6
7            string temp = "";
8
9            for(int i = 0; i < s.length(); i += k) {
10
11                int sum = 0;
12
13                for(int j = i; j < i + k && j < s.length(); j++) {
14                    sum += s[j] - '0';
15                }
16
17                temp += to_string(sum);
18            }
19
20            s = temp;
21        }
22
23        return s;
24    }
25};