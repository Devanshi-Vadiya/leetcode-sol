// Last updated: 5/16/2026, 11:35:23 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int lowestPrice =prices[0];
5        int maximumProfit = 0;
6
7        for(int i =1;i<prices.size();i++){
8            int todaysProfit = prices[i] - lowestPrice;
9
10            maximumProfit = max(maximumProfit ,todaysProfit);
11            lowestPrice = min(lowestPrice,prices[i]);
12        }
13        return maximumProfit;
14    }
15};