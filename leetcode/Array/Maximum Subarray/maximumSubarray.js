/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    for (let index = 1; index < nums.length; index++) {
        nums[index] = Math.max(nums[index], nums[index] + nums[index - 1]);
    }
    return Math.max(...nums);
};