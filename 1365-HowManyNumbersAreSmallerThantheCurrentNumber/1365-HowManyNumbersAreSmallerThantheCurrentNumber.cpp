// Last updated: 7/8/2026, 2:41:01 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> temp = nums;
5        sort(temp.begin(), temp.end());
6
7        unordered_map<int, int> mp;
8
9        for (int i = 0; i < temp.size(); i++) {
10            if (!mp.count(temp[i]))
11                mp[temp[i]] = i;
12        }
13
14        vector<int> ans;
15
16        for (int num : nums)
17            ans.push_back(mp[num]);
18
19        return ans;
20    }
21};