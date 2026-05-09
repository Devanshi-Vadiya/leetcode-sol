// Last updated: 5/9/2026, 9:54:53 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        unordered_map<int, int> freq;
5
6        for (int num : nums) {
7            freq[num]++;
8        }
9
10        for (auto it : freq) {
11            if (it.second == 1) {
12                return it.first;
13            }
14        }
15
16        return -1;
17    }
18};