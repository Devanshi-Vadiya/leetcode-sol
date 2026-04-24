// Last updated: 4/24/2026, 5:06:06 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (p.length() > s.length()) return res;
        vector<int> p_count(26, 0), w_count(26, 0);
        for (int i = 0; i < p.length(); ++i) {
            p_count[p[i] - 'a']++;
            w_count[s[i] - 'a']++;
        }
        if (p_count == w_count) res.push_back(0);
        for (int i = p.length(); i < s.length(); ++i) {
            w_count[s[i] - 'a']++;
            w_count[s[i - p.length()] - 'a']--;
            if (p_count == w_count) res.push_back(i - p.length() + 1);
        }
        return res;
    }
};   