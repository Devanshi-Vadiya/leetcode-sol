// Last updated: 5/21/2026, 1:13:12 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<int> answer;
7
8        for (int i = 0; i < nums.size(); i += 2) {
9            answer.push_back(nums[i + 1]);
10            answer.push_back(nums[i]);
11        }
12
13        return answer;
14    }
15};