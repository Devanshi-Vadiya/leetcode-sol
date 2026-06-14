// Last updated: 6/14/2026, 5:32:56 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = prices[0];
5        int maxProfit = 0;
6
7        for(int i =1;i<prices.size();i++){
8            if(prices[i]<minPrice){
9                minPrice = prices [i];
10            }
11
12            int profit = prices[i] - minPrice;
13
14            if(profit > maxProfit){
15                maxProfit = profit;
16            }
17        }
18        return maxProfit;
19    }
20};