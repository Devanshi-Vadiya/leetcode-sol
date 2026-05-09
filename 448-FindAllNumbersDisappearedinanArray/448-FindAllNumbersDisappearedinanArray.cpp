// Last updated: 5/9/2026, 9:49:50 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        vector<int> ans;
5
6        // Mark visited numbers
7        for (int i = 0; i < nums.size(); i++) {
8            int index = abs(nums[i]) - 1;
9
10            if (nums[index] > 0) {
11                nums[index] = -nums[index];
12            }
13        }
14
15        // Positive indices = missing numbers
16        for (int i = 0; i < nums.size(); i++) {
17            if (nums[i] > 0) {
18                ans.push_back(i + 1);
19            }
20        }
21
22        return ans;
23    }
24};