// Last updated: 8/13/2026, 2:40:45 PM
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    int maxProduct(vector<string>& words) {
7        int product = 0;
8        int n = words.size();
9
10        // Each word gets 26 slots to store character presence
11        vector<int> mask(26 * n, 0);
12
13        // Build the character presence table
14        for (int i = 0; i < n; i++) {
15            for (char c : words[i]) {
16                mask[(26 * i) + (c - 'a')]++;
17            }
18        }
19
20        // Compare every pair of words
21        for (int i = 0; i < n; i++) {
22            for (int j = i + 1; j < n; j++) {
23
24                bool common = false;
25
26                // Check whether the two words share any character
27                for (int k = 0; k < 26; k++) {
28                    if (mask[(26 * i) + k] &&
29                        mask[(26 * j) + k]) {
30
31                        common = true;
32                        break;
33                    }
34                }
35
36                // If no common characters exist, update the answer
37                if (!common) {
38                    int curr =
39                        words[i].size() *
40                        words[j].size();
41
42                    product = max(product, curr);
43                }
44            }
45        }
46
47        return product;
48    }
49};