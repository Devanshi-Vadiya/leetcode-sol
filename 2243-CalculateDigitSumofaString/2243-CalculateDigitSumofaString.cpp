// Last updated: 5/24/2026, 9:43:58 PM
1class Solution {
2public:
3    vector<int> frequencySort(vector<int>& nums) {
4        vector<int> count(201, 0);
5        for (int num : nums) {
6            count[num + 100]++;
7        }
8        sort(nums.begin(), nums.end(), [&](int a, int b) {
9            if (count[a + 100] == count[b + 100])
10                return a > b;
11            return count[a + 100] < count[b + 100];
12        });
13        return nums;
14    }
15};