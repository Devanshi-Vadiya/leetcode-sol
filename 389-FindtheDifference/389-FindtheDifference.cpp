// Last updated: 7/8/2026, 9:15:37 AM
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char ans = 0;
5
6        for (char c : s) ans ^= c;
7        for (char c : t) ans ^= c;
8
9        return ans;
10    }
11};