// Last updated: 7/16/2026, 1:59:37 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int ans = 0;
7
8        while (left < right) {
9            int h = min(height[left], height[right]);
10            int w = right - left;
11
12            ans = max(ans, h * w);
13
14            if (height[left] < height[right])
15                left++;
16            else
17                right--;
18        }
19
20        return ans;
21    }
22};