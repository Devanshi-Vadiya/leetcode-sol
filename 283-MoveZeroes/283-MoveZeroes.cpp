// Last updated: 5/16/2026, 11:40:15 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4
5        int nonZeroIndex=0;
6
7        for(int i =0;i<nums.size();i++){
8            if(nums[i]!=0){
9                nums[nonZeroIndex] = nums[i];
10                nonZeroIndex ++;
11            }
12        }
13        for(int i = nonZeroIndex ; i< nums.size();i++){
14            nums[i] = 0;
15        }
16    }
17};