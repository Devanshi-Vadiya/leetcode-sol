// Last updated: 6/14/2026, 4:56:19 PM
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4
5                int left = 0;
6                int right = nums.size() -1;
7
8                while(left<right){
9                    //left even
10                    if(nums[left] %2 ==0){
11                            left++;
12                    }
13                    //right odd
14                    else if(nums[right]%2==1){
15                        right--;
16                    }
17                    //left is odd and right is even
18                    else{
19                        swap(nums[left],nums[right]);
20                        left++;
21                        right --;
22                    }
23                }
24                return nums;
25    }
26};