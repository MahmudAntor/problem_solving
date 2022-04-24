/**
 * @param {number[]} height
 * @return {number}
 */
 var maxArea = function(height) {
    let maxContainer = 0, i = 0, j = height.length-1;
    while (i < j) {
        let h = Math.min(height[i], height[j]);
        maxContainer = Math.max(maxContainer, h * (j - i));
        while(height[i] <= h && i < j ) i++;
        while(height[j] <= h && i < j ) j--;
    }
    return maxContainer;    
};

console.log(maxArea([8,2,3,10,5,7]));