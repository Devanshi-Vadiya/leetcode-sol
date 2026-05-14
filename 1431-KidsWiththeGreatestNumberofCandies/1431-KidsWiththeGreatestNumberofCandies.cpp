// Last updated: 5/14/2026, 10:22:39 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int maxCandy = 0;
5
6        for(int i = 0; i < candies.size(); i++) {
7            maxCandy = max(maxCandy, candies[i]);
8        }
9
10        vector<bool> ans;
11
12        for(int i = 0; i < candies.size(); i++) {
13            if(candies[i] + extraCandies >= maxCandy) {
14                ans.push_back(true);
15            } else {
16                ans.push_back(false);
17            }
18        }
19
20        return ans;
21    }
22};