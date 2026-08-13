// Last updated: 8/13/2026, 2:10:45 PM
1class Solution {
2public:
3    int maxProduct(vector<string>& words) {
4        int n = size(words), ans = 0;
5        vector<bitset<26>> chars(n);
6        for (int i = 0; i < n; i++) {
7            for (auto& ch :
8                 words[i]) // map the letters to 1 if it occurs in the word
9                chars[i][ch - 'a'] = 1;
10            // now check with all other words and if there's no common letter,
11            // then update ans
12            for (int j = 0; j < i; j++)
13                if (!checkCommon(chars[i], chars[j]))
14                    ans = max(ans, int(size(words[i]) * size(words[j])));
15        }
16        return ans;
17    }
18    // Returns true if there's a common letter between bitset of two words
19    bool checkCommon(bitset<26>& a, bitset<26>& b) {
20        for (int i = 0; i < 26; i++)
21            if (a[i] && b[i])
22                return true;
23        return false;
24    }
25};