// Last updated: 8/6/2026, 10:08:12 AM
1class Solution {
2public:
3    long long maxPairStrength(vector<int>& nums) {
4        long long ans=0;
5
6    for(int i =0;i<nums.size();i++){
7        for(int j = i+1;j<nums.size();j++){
8            long long g = gcd(nums[i],nums[j]);
9
10
11            long long strength=(1LL *nums[i]*nums[j])/(g*g);
12
13            ans = max(ans,strength);
14        }
15    }
16           return ans; 
17    }
18};