// Last updated: 6/29/2026, 10:54:30 AM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> s(nums1.begin(), nums1.end());
5        unordered_set<int> ans;
6
7        for (int num : nums2) {
8            if (s.count(num))
9                ans.insert(num);
10        }
11
12        return vector<int>(ans.begin(), ans.end());
13    }
14};