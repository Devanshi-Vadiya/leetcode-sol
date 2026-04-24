// Last updated: 4/24/2026, 5:06:36 PM
var maxSubArray = function(nums) {
    let current = nums[0];
    let max = nums[0];

    for (let i = 1; i < nums.length; i++) {
        current = Math.max(nums[i], current + nums[i]);
        max = Math.max(max, current);
    }

    return max;
};