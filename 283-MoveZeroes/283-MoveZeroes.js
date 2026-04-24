// Last updated: 4/24/2026, 5:06:26 PM
var moveZeroes = function(nums) {
    let index = 0;

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] !== 0) {
            [nums[index], nums[i]] = [nums[i], nums[index]];
            index++;
        }
    }
};