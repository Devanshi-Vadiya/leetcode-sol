// Last updated: 4/24/2026, 5:06:19 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int c=0;
      int k=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            c++;
        }
        else{
            nums[k]=nums[i];
            k++;
        }
      }
      while (k < nums.size()) {
            nums[k] = 0;
            k++;
        }
    }
};

//int k = 0;

// for (int i = 0; i < nums.size(); i++) {
//     if (nums[i] != 0) {
//         nums[k] = nums[i];
//         k++;
//     }
// }

// while (k < nums.size()) {
//     nums[k] = 0;
//     k++;
// }