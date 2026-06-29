// Last updated: 6/29/2026, 10:57:17 AM
1class Solution {
2public:
3    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
4        unordered_map<int, int> freq;
5
6        for (int num : arr1)
7            freq[num]++;
8
9        vector<int> ans;
10
11        for (int num : arr2) {
12            while (freq[num]--) {
13                ans.push_back(num);
14            }
15        }
16
17        vector<int> rem;
18
19        for (auto &p : freq) {
20            while (p.second-- > 0)
21                rem.push_back(p.first);
22        }
23
24        sort(rem.begin(), rem.end());
25
26        ans.insert(ans.end(), rem.begin(), rem.end());
27
28        return ans;
29    }
30};