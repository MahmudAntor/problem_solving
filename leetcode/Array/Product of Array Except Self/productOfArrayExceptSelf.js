/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
  let inputLength = nums.length;
  let result = new Array(inputLength).fill(1);
  let leftProduct = rightProduct = 1;
  for(let i=0; i<inputLength; i++)
  {
    result[i] *= leftProduct;
    leftProduct *= nums[i];
    result[inputLength - 1 - i] *= rightProduct;
    rightProduct *= nums[inputLength - 1 - i];
  }
  return result;
};