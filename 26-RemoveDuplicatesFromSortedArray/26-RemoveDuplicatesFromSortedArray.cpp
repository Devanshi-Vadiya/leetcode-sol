// Last updated: 4/24/2026, 5:06:40 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int k = 1; // first element is unique

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};