// Last updated: 5/21/2026, 10:17:24 PM
1class Solution {
2public:
3    bool checkRecord(string s) {
4        int absent = 0;
5
6        for(int i = 0; i < s.length(); i++) {
7            if(s[i] == 'A') {
8                absent++;
9            }
10
11            if(absent >= 2) {
12                return false;
13            }
14
15            if(i >= 2 && s[i] == 'L' && s[i - 1] == 'L' && s[i - 2] == 'L') {
16                return false;
17            }
18        }
19
20        return true;
21    }
22};