// Last updated: 5/21/2026, 9:54:55 PM
1class Solution {
2public:
3    bool checkIfPangram(string s) {
4        int arr[26] = {0};
5
6        for (char ch : s) {
7            arr[ch - 'a']++;
8        }
9
10        for (int i = 0; i < 26; i++) {
11            if (arr[i] == 0) {
12                return false;
13            }
14        }
15
16        return true;
17    }
18};