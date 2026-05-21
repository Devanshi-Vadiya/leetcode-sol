// Last updated: 5/21/2026, 10:16:40 PM
1class Solution {
2public:
3    int findLUSlength(string a, string b) {
4        if(a == b) {
5            return -1;
6        }
7
8        return max(a.length(), b.length());
9    }
10};