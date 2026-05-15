// Last updated: 5/15/2026, 2:27:01 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int ans = 0;
5        for(int i=0;i<hours.size();i++){
6            if(hours[i]>=target){
7                ans ++;
8            }
9        }
10        return ans;
11    }
12};