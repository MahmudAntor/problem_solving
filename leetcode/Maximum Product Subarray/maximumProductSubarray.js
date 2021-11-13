/**
 * @param {number[]} nums
 * @return {number}
 */
 var maxProduct = function(nums) {
    if(nums.length == 0) return 0;
    if(nums.length == 1) return nums[0];
    let imax, imin, imaxProduct;
    imax = imin = imaxProduct = nums[0];
    for(let i = 1; i < nums.length; i++){
        let tmp = imax;
        imax = Math.max(nums[i], imax * nums[i], imin * nums[i]);
        imin = Math.min(nums[i], tmp * nums[i], imin * nums[i]);
        imaxProduct = Math.max(imaxProduct, imax);
    }
    return imaxProduct;
};

console.log(maxProduct([0,0,3,0,4]));