// Last updated: 5/21/2026, 10:15:42 PM
1class Solution {
2public:
3    string toLowerCase(string s) {
4        for(int i = 0; i < s.length(); i++) {
5            if(s[i] >= 'A' && s[i] <= 'Z') {
6                s[i] = s[i] + 32;
7            }
8        }
9
10        return s;
11    }
12};