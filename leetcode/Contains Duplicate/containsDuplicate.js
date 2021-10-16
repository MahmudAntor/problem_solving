/**
 * @param {number[]} nums
 * @return {boolean}
 */
 var containsDuplicate = function(nums) {
  let Duplicates = new Set();
  for(let i=0, length = nums.length; i<length; i++)
  {
    if(Duplicates.has(nums[i]))
      return true;
    else 
      Duplicates.add(nums[i]);
  }
  return false;
};