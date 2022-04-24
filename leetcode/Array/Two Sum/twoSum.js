/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {

    let complements = new Map();
    
    for(let i=0; i<nums.length; i++)
    {
      let complement = target - nums[i];
      let complementIndex = complements.get(complement);
      if(complementIndex != undefined)
        return [complementIndex, i];
      else 
        complements.set(nums[i], i);
    }
};