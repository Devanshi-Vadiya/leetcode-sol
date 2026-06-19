// Last updated: 6/19/2026, 10:35:21 AM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0;
5        int ans = 0;
6
7        for(int num : nums){
8            if(num == 1){
9                count++;
10            }
11            else{
12                count = 0;
13            }
14            ans = max(ans,count);
15        }
16        return ans;
17    }
18};