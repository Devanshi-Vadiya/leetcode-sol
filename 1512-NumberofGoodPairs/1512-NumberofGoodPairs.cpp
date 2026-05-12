// Last updated: 5/12/2026, 10:39:13 PM
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        
5        //hashmap
6        unordered_map<int,int> freq;
7        //trasversing thru the array
8
9        int count = 0;
10        for(int i =0;i<nums.size();i++){
11
12            //add previous freq to count 
13            count += freq[nums[i]];
14
15            //increase in freq
16
17            freq[nums[i]]++;
18
19        }
20        return count;
21    }
22};