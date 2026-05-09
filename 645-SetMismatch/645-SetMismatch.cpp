// Last updated: 5/9/2026, 10:14:29 PM
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        vector<int> ans;
8
9        int duplicate = -1;
10        int missing = 1;
11
12        for (int i = 1; i < nums.size(); i++) {
13
14            if (nums[i] == nums[i - 1]) {
15                duplicate = nums[i];
16            }
17
18            else if (nums[i] > nums[i - 1] + 1) {
19                missing = nums[i - 1] + 1;
20            }
21        }
22
23        // special case:
24        // missing number is n
25        if (nums[nums.size() - 1] != nums.size()) {
26            missing = nums.size();
27        }
28
29        ans.push_back(duplicate);
30        ans.push_back(missing);
31
32        return ans;
33    }
34};