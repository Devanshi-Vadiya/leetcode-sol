// Last updated: 7/16/2026, 1:17:41 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int left = 0, ans = 0;
6
7        for (int right = 0; right < s.size(); right++) {
8
9            while (st.count(s[right])) {
10                st.erase(s[left]);
11                left++;
12            }
13
14            st.insert(s[right]);
15            ans = max(ans, right - left + 1);
16        }
17
18        return ans;
19    }
20};