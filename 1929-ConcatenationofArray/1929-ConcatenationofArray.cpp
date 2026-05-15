// Last updated: 5/15/2026, 3:02:20 PM
1class Solution {
2public:
3    int arraySign(vector<int>& nums) {
4        int negativeCount = 0;
5
6        for(int i = 0; i < nums.size(); i++) {
7            if(nums[i] == 0) {
8                return 0;
9            }
10
11            if(nums[i] < 0) {
12                negativeCount++;
13            }
14        }
15
16        if(negativeCount % 2 == 0) {
17            return 1;
18        }
19
20        return -1;
21    }
22};