// Last updated: 7/21/2026, 2:04:31 PM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        vector<int> res;
5        if (p.length() > s.length())
6            return res;
7        vector<int> p_count(26, 0), w_count(26, 0);
8        for (int i = 0; i < p.length(); ++i) {
9            p_count[p[i] - 'a']++;
10            w_count[s[i] - 'a']++;
11        }
12        if (p_count == w_count)
13            res.push_back(0);
14        for (int i = p.length(); i < s.length(); ++i) {
15            w_count[s[i] - 'a']++;
16            w_count[s[i - p.length()] - 'a']--;
17            if (p_count == w_count)
18                res.push_back(i - p.length() + 1);
19        }
20        return res;
21    }
22};