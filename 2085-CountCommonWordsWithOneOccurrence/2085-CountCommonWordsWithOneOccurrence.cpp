// Last updated: 7/8/2026, 3:01:53 PM
1class Solution {
2public:
3    int countWords(vector<string>& words1, vector<string>& words2) {
4        unordered_map<string, int> mp1, mp2;
5
6        for (string s : words1)
7            mp1[s]++;
8
9        for (string s : words2)
10            mp2[s]++;
11
12        int count = 0;
13
14        for (auto it : mp1) {
15            if (it.second == 1 && mp2[it.first] == 1)
16                count++;
17        }
18
19        return count;
20    }
21};