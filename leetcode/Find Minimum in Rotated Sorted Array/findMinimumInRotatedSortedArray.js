/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
  let lastElement = nums.length - 1, mid, startElement=0;
  if(lastElement == 0)
    return nums[startElement];
  while(startElement<lastElement)
  {
    mid = startElement + Math.floor((lastElement - startElement)/2);
    if(nums[startElement] < nums[startElement - 1] || nums[startElement] < nums[lastElement])
      return nums[startElement];
    if(nums[lastElement] < nums[lastElement - 1])
      return nums[lastElement];
    if(nums[mid] < nums[lastElement])
      lastElement = mid;
    else 
      startElement = mid+1;
  }
  return nums[mid];
};