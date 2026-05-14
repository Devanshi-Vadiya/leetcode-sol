// Last updated: 5/14/2026, 3:19:52 PM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4      for(int i=1;i< nums.size();i++){
5        nums[i] = nums[i] + nums[i-1];
6      }  
7      return nums;
8    }
9};