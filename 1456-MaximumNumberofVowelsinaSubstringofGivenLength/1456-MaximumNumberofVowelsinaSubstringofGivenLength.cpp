// Last updated: 7/21/2026, 1:39:37 PM
1class Solution {
2public:
3    bool isVowel(char ch) {
4        return ch == 'a' || ch == 'e' || ch == 'i' ||
5               ch == 'o' || ch == 'u';
6    }
7
8    int maxVowels(string s, int k) {
9        int count = 0;
10        int ans = 0;
11
12        for (int i = 0; i < k; i++) {
13            if (isVowel(s[i]))
14                count++;
15        }
16
17        ans = count;
18
19        for (int i = k; i < s.size(); i++) {
20            if (isVowel(s[i]))
21                count++;
22
23            if (isVowel(s[i - k]))
24                count--;
25
26            ans = max(ans, count);
27        }
28
29        return ans;
30    }
31};
32
33