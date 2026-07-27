// Last updated: 7/27/2026, 4:51:52 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int ans = 0;
7        
8
9        while (left < right) {
10            int h = min(height[left], height[right]);
11            int w = right - left;
12
13            ans = max(ans, h * w);
14
15            if (height[left] < height[right])
16                left++;
17            else
18                right--;
19        }
20
21        return ans;
22    }
23};
24