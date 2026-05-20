// Last updated: 5/20/2026, 4:57:28 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> answer(n);
7
8        int left = 0;
9        int right = n - 1;
10        int index = n - 1;
11
12        while (left <= right) {
13            if (abs(nums[left]) > abs(nums[right])) {
14                answer[index] = nums[left] * nums[left];
15                left++;
16            } else {
17                answer[index] = nums[right] * nums[right];
18                right--;
19            }
20
21            index--;
22        }
23
24        return answer;
25    }
26};